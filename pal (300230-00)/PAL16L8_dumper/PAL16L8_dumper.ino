/*
// Based and core Written by K Adcock.
// http://danceswithferrets.org/geekblog/?page_id=903
//
// I2C modifications by JDat
*/
#include "pindefine.h"
#include "Adafruit_MCP23017.h"

uint16_t ic1out=0xFFFF;
uint16_t ic2out=0xFFFF;

Adafruit_MCP23017 mcp1;
Adafruit_MCP23017 mcp2;

void setup() {
  Serial.begin(115200);

  //Wire.setClock(400000);
  Wire.setClock(1000000);
  //Wire.setClock(3400000);

  mcp1.begin(IC1);
  mcp2.begin(IC2);


  for (uint8_t i = 0; i < 16; i++) {
    mcp1.pinMode(i,INPUT_PULLUP);
    mcp2.pinMode(i,INPUT_PULLUP);
  }

/*
  // for individual pin test
  while (true) {
    uint8_t i = 0;

    if (dataRoute[i]==IC1) {
      bitSet(ic1out,dataArray[i]);
    } else if (dataRoute[i]==IC2) {
      bitSet(ic2out,dataArray[i]);
    }
    mcp1.writeGPIOAB(ic1out);
    mcp2.writeGPIOAB(ic2out);   
    delay(2000);

    if (dataRoute[i]==IC1) {
      bitClear(ic1out,dataArray[i]);
    } else if (dataRoute[i]==IC2) {
      bitClear(ic2out,dataArray[i]);
    }
    mcp1.writeGPIOAB(ic1out);
    mcp2.writeGPIOAB(ic2out);   
    
    delay(2000);
  }
*/

  pinMode(LED_BUILTIN, OUTPUT);

  // set address lines as outputs
  for (uint8_t i=0;i<=9;i++) {
    if (addrRoute[i]==IC1) {
      mcp1.pinMode(addrArray[i],OUTPUT);
      
    } else if (addrRoute[i]==IC2) {
      mcp2.pinMode(addrArray[i],OUTPUT);
    }
  }

  // set data lines as inputs
  for (uint8_t i=0;i<=7;i++) {
    if (dataRoute[i]==IC1) {
      mcp1.pinMode(dataArray[i],INPUT);
    } else if (dataRoute[i]==IC2) {
      mcp2.pinMode(dataArray[i],INPUT);
    }
  }

  // start reading
  digitalWrite(LED_BUILTIN, HIGH);
  //Serial.println("A9,A8,A7,A6,A5,A4,A3,A2,A1,A0,,D7,D6,D5,D4,D3,D2,D1,D0");
  Serial.println();
  Serial.println("nWR,nRD,nSndGPiB,nc7,A12,A13,A14,IRQ,nc2,ALE,,nCsROM,nCsRAM,nCsFDC,wrGPiB,rdGPiB,TE,nco2,rdSW");

  // start actual reading
  uint8_t result;
  for (long i = 0; i <= 1023; i++) {
    result = ReadByteFrom(i);
    printValue(i, result);
  }
  //end actual reading
  
  Serial.println();
  digitalWrite(LED_BUILTIN, LOW);
  //end reading

  // we are done halt (looping)
  while (true) {
    ;
  }
}

void loop() {
  ;
}

void printValue(long addr, uint8_t data) {
   for (int8_t i = 9; i >= 0; i--) {
      Serial.print(bitRead(addr, i) ? "1" : "0");
      Serial.print(",");
   }
   
   Serial.print(",");

   for (int8_t i = 7; i >= 1; i--) {
      Serial.print(bitRead(data, i) ? "1" : "0");
      Serial.print(",");
   }
   Serial.println(bitRead(data, 0));
   
}


// this function assumes that data lines have already been set as INPUTS
byte ReadByteFrom(long addr) {
  SetAddress(addr);
  byte b = ReadData();
  return b;
}

void SetAddress(long a) {
  for (uint8_t i = 0; i <= 9; i++) {
    if (addrRoute[i] == IC1) {
      if ( a & long(round(pow(2,i))) ) {
        bitSet(ic1out,addrArray[i]);
      } else {
        bitClear(ic1out,addrArray[i]);
      }
    } else if (addrRoute[i] == IC2) {
      if ( a & long(round(pow(2,i))) ) {
        bitSet(ic2out, addrArray[i]);
      } else {
        bitClear(ic2out, addrArray[i]);
      }
    }
  }

  mcp1.writeGPIOAB(ic1out);
  mcp2.writeGPIOAB(ic2out);
}

// this function assumes that address is already set
byte ReadData() {
  byte result = 0;

  for (uint8_t i = 0; i <= 7; i++) {
    if (dataRoute[i] == IC1) {
      if ( mcp1.digitalRead(dataArray[i]) ) {
        bitSet(result, i);
      }
    } else if (dataRoute[i] == IC2) {
      if ( mcp2.digitalRead(dataArray[i]) ) {
        bitSet(result, i);
      }      
    }
  }
  return(result);
}
