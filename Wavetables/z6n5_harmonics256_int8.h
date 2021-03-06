#ifndef Z6N5_HARMONICS256_INT8_H_
#define Z6N5_HARMONICS256_INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"

#define Z6N5_HARMONICS256_NUM_CELLS 256
#define Z6N5_HARMONICS256_SAMPLERATE 256

CONSTTABLE_STORAGE(int8_t) Z6N5_HARMONICS256_DATA []  =
        { 0, 84, 91, 57, 54, 57, 34, 34, 23, 3, 7, -7, -20, -20, -34, -20, -34, -23, -17, -27, -10, -17, -10, 0, 3, 7, 30, 20, 34, 20, 30, 34, 30, 34, 30, 20, 17, 7, -3, -30, -44, -84, -128, -117, -7, 23, 37, 37, 50, 37, 37, 30, 30, 17, 17, 23, 13, 13, -7, -23, -10, -23, -13, -27, -37, -27, -13, -23, -10, -23, -7, 13, 13, 23, 17, 17, 30, 30, 37, 37, 50, 37, 37, 23, -7, -117, -128, -84, -44, -30, -3, 7, 17, 20, 30, 34, 30, 34, 30, 20, 34, 20, 30, 7, 3, 0, -10, -17, -10, -27, -17, -23, -34, -20, -34, -20, -20, -7, 7, 3, 23, 34, 34, 57, 54, 57, 91, 84, 0, -84, -91, -57, -54, -57, -34, -34, -23, -3, -7, 7, 20, 20, 34, 20, 34, 23, 17, 27, 10, 17, 10, 0, -3, -7, -30, -20, -34, -20, -30, -34, -30, -34, -30, -20, -17, -7, 3, 30, 44, 84, 128, 117, 7, -23, -37, -37, -50, -37, -37, -30, -30, -17, -17, -23, -13, -13, 7, 23, 10, 23, 13, 27, 37, 27, 13, 23, 10, 23, 7, -13, -13, -23, -17, -17, -30, -30, -37, -37, -50, -37, -37, -23, 7, 117, 128, 84, 44, 30, 3, -7, -17, -20, -30, -34, -30, -34, -30, -20, -34, -20, -30, -7, -3, 0, 10, 17, 10, 27, 17, 23, 34, 20, 34, 20, 20, 7, -7, -3, -23, -34, -34, -57, -54, -57, -91, -84 };

#endif	/* Z6N5_HARMONICS256_INT8_H_ */"