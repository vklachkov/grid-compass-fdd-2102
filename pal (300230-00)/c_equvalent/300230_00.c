#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

// nPrefix mean: signal is inverted (active LOW)
// nc7, nc2 are not used, ignoring
#define nWr 9
#define nRd 8
#define nGPiBSend 7
#define nc7 6
#define A12 5
#define A13 4
#define A14 3
#define IRQ 2
#define nc2 1
#define ALE 0

#define nCsROM 7
#define nCsRAM 6
#define nCsFDC 5
#define WrGPiB 4    // note this is not inverted (LOW when disabled)
#define nRdGPiB 3
#define TE 2
#define nIRQ 1
#define nCsSW 0

// handy utility macros by kgoba (YL3JG)
#define bit_set(x, bit)   ((x) |= (1 << (bit)))
#define bit_clear(x, bit)   ((x) &= ~(1 << (bit)))
#define bit_check(x, bit)   ((x) & (1 << (bit)))


uint8_t do_PAL(uint16_t addr);

int main(void) {
  FILE *outstream;

  outstream = fopen("pal16l8_tst.bin","wb");
  if( outstream == NULL) {
    printf("\nFile open error.\n");
    return(-1);
  }

  for (uint16_t addr = 0; addr < 1024; addr++) {
    fputc(do_PAL(addr),outstream); //write one Byte to file
  }

  fclose(outstream);
  return(0);
}

uint8_t do_PAL(uint16_t addr) {
  uint8_t result = 0;
  uint8_t decoder = 0;
  
  // TE pin is inverted from nGPiBSend pin
  if (!bit_check(addr, nGPiBSend))
    bit_set(result, TE);

  // nIRQ pin is inverted from IRQ pin
  if (!bit_check(addr, IRQ))
    bit_set(result, nIRQ);
  
  //Disable all ICs by default
  bit_set(result, nCsROM);
  bit_set(result, nCsRAM);
  bit_set(result, nCsFDC);
  bit_set(result, nCsSW);
  bit_clear(result, WrGPiB);
  bit_set(result, nRdGPiB);
    
  if (!bit_check(addr, ALE)) {  // do only if ALE line LOW
    
    // extract number form address pins, kinda 3-to-8 decoder
    if (bit_check(addr, A12))
      bit_set(decoder, 0);
      
    if (bit_check(addr, A13))
      bit_set(decoder, 1);

    if (bit_check(addr, A14))
      bit_set(decoder, 2);
    

    switch (decoder) {
      case 0:   // ROM selected 0x0000-0x0FFF
        // MCU want to talk with us, clear CS
        bit_clear(result, nCsROM);
        //we don't care about nWr and nRd pins here
        break;
      
      case 1:   // RAM selected 0x1000-0x1FFF
        // MCU want to talk with us, clear CS
        bit_clear(result, nCsRAM);
        
        // nWR (no write) and nRD pin high (no read): disable chip (CS HIGH)
        if (bit_check(addr, nWr) && bit_check(addr, nRd))
          bit_set(result, nCsRAM);
        break;
        
      case 2:   // FDC selected 0x2000-0x2FFF
        // MCU want to talk with us, clear CS
        bit_clear(result, nCsFDC);
        
        // nWR (no write) and nRD pin high (no read): disable chip (CS HIGH)
        if (bit_check(addr, nWr) && bit_check(addr, nRd)) 
          bit_set(result, nCsFDC);
        break;

      case 3:   // Adress switch selected 0x3000-0x3FFF
        // we want to read address switch state
        if (!bit_check(addr, nRd))
          bit_clear(result, nCsSW);
        // we dont date about nWR pin
        break;

      case 4:   // GPiB Selected 0x4000-0x4FFF
        // we want to write into GPiB
        if (!bit_check(addr, nWr))
          bit_set(result, WrGPiB);
        // we want to read fro GPiB
        if (!bit_check(addr, nRd))
          bit_clear(result, nRdGPiB);
        
        // nWR (no write) and nRD pin high (no read): disable chip (CS HIGH)
        if (bit_check(addr, nWr) && bit_check(addr, nRd)) {
          bit_clear(result, WrGPiB);
          bit_set(result, nRdGPiB);
        }
        break;

      default:  // something else, ignore, all CS stay deactivated
        break;
    }
  }
  return result;
}
