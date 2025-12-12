#ifndef _programmer_pindefine_H_
#define _programmer_pindefine_H_

#include <Arduino.h>

#define IC1         4   // IC addr1 0x24
#define IC2         6   // IC addr2 0x26

#define addrpin0    6
#define addrpin1    7
#define addrpin2    8
#define addrpin3    9
#define addrpin4    10
#define addrpin5    11
#define addrpin6    12
#define addrpin7    13
#define addrpin8    14

#define addrpin9    0

#define datapin7    1
#define datapin6    2
#define datapin5    3
#define datapin4    4
#define datapin3    5
#define datapin2    6
#define datapin1    7
#define datapin0    8

//#define addrpin6    5
//#define addrpin7    4

//#define addrpin8    10
//#define addrpin9    9

uint8_t addrArray[]=  {addrpin0,addrpin1,addrpin2,addrpin3,
                      addrpin4,addrpin5,addrpin6,addrpin7,
                      addrpin8,addrpin9};

uint8_t addrRoute[]=  {IC2,IC2,IC2,IC2,
                      IC2,IC2,IC2,IC2,
                      IC2,IC1};

uint8_t dataArray[]=  {datapin0,datapin1,datapin2,datapin3,
                      datapin4,datapin5,datapin6,datapin7};

uint8_t dataRoute[]=  {IC1,IC1,IC1,IC1,
                      IC1,IC1,IC1,IC1};

// IC2
#define dipPin1   0x10
#define dipPin2   0x11
#define dipPin3   0x12
#define dipPin4   0x13
#define dipPin5   0x14
#define dipPin6   0x15
#define dipPin7   0x16
#define dipPin8   0x17
#define dipPin9   0x18
#define dipPin10  0x19
#define dipPin11  0x1A
#define dipPin12  0x1B
#define dipPin13  0x1C
#define dipPin14  0x1D
#define dipPin15  0x1E

//#define dipPin16  // NO, NO! This is GND

// IC1
#define dipPin17  0x0
#define dipPin18  0x1
#define dipPin19  0x2
#define dipPin20  0x3
#define dipPin21  0x4
#define dipPin22  0x5
#define dipPin23  0x6
#define dipPin24  0x7
#define dipPin25  0x8
#define dipPin26  0x9
#define dipPin27  0xA
#define dipPin28  0xB
#define dipPin29  0xC
#define dipPin30  0xD
#define dipPin31  0xE

//#define dipPin32  // NO, NO! This is +5V

#endif
