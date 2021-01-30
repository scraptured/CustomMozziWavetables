#ifndef Z5N2_HARMONICS256_INT8_H_
#define Z5N2_HARMONICS256_INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"

#define Z5N2_HARMONICS256_NUM_CELLS 256
#define Z5N2_HARMONICS256_SAMPLERATE 256

CONSTTABLE_STORAGE(int8_t) Z5N2_HARMONICS256_DATA []  =
        { 0, 50, 54, 47, 47, 40, 37, 26, 31, 23, 26, 17, 16, 9, 8, 5, 3, -14, -3, -8, -9, -9, -17, -14, -14, -19, -17, -17, -16, -16, -17, -22, -16, -11, -17, -12, -16, -12, -6, -3, 3, 11, 8, 14, 20, 25, 30, 44, 51, 59, 76, 128, -12, -25, -28, -31, -34, -33, -26, -34, -30, -26, -25, -26, -23, -23, -19, -14, -5, -6, -5, -8, 3, 9, 3, 6, 9, 9, 11, 16, 14, 19, 17, 19, 23, 11, 23, 20, 19, 16, 16, 12, 6, 6, 8, 2, -6, -9, -23, -28, -44, -73, -126, -50, -23, -5, 5, 12, 19, 17, 22, 23, 28, 23, 30, 22, 25, 23, 26, 26, 19, 14, 16, 12, 9, 3, 5, 3, 0, -3, -5, -3, -9, -12, -16, -14, -19, -26, -26, -23, -25, -22, -30, -23, -28, -23, -22, -17, -19, -12, -5, 5, 23, 50, 126, 73, 44, 28, 23, 9, 6, -2, -8, -6, -6, -12, -16, -16, -19, -20, -23, -11, -23, -19, -17, -19, -14, -16, -11, -9, -9, -6, -3, -9, -3, 8, 5, 6, 5, 14, 19, 23, 23, 26, 25, 26, 30, 34, 26, 33, 34, 31, 28, 25, 12, -128, -76, -59, -51, -44, -30, -25, -20, -14, -8, -11, -3, 3, 6, 12, 16, 12, 17, 11, 16, 22, 17, 16, 16, 17, 17, 19, 14, 14, 17, 9, 9, 8, 3, 14, -3, -5, -8, -9, -16, -17, -26, -23, -31, -26, -37, -40, -47, -47, -54, -50 };

#endif	/* Z5N2_HARMONICS256_INT8_H_ */"