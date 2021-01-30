#ifndef Z2N5_HARMONICS256_INT8_H_
#define Z2N5_HARMONICS256_INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"

#define Z2N5_HARMONICS256_NUM_CELLS 256
#define Z2N5_HARMONICS256_SAMPLERATE 256

CONSTTABLE_STORAGE(int8_t) Z2N5_HARMONICS256_DATA []  =
        { 0, 113, 128, 102, 79, 75, 57, 58, 50, 31, 26, 18, 5, 4, 0, -14, -19, -14, -15, -23, -23, -27, -24, -22, -19, -22, -12, -18, -12, -9, -5, -4, 1, 5, 7, 8, 8, 5, 11, 14, 18, 19, 9, 7, 20, 12, 9, 8, 14, 12, 11, -8, 0, -1, -1, 8, -4, -11, 0, -14, -8, -12, -9, -15, -18, -15, -9, -12, -8, -14, 0, -11, -4, 8, -1, -1, 0, -8, 11, 12, 14, 8, 9, 12, 20, 7, 9, 19, 18, 14, 11, 5, 8, 8, 7, 5, 1, -4, -5, -9, -12, -18, -12, -22, -19, -22, -24, -27, -23, -23, -15, -14, -19, -14, 0, 4, 5, 18, 26, 31, 50, 58, 57, 75, 79, 102, 128, 113, 0, -113, -128, -102, -79, -75, -57, -58, -50, -31, -26, -18, -5, -4, 0, 14, 19, 14, 15, 23, 23, 27, 24, 22, 19, 22, 12, 18, 12, 9, 5, 4, -1, -5, -7, -8, -8, -5, -11, -14, -18, -19, -9, -7, -20, -12, -9, -8, -14, -12, -11, 8, 0, 1, 1, -8, 4, 11, 0, 14, 8, 12, 9, 15, 18, 15, 9, 12, 8, 14, 0, 11, 4, -8, 1, 1, 0, 8, -11, -12, -14, -8, -9, -12, -20, -7, -9, -19, -18, -14, -11, -5, -8, -8, -7, -5, -1, 4, 5, 9, 12, 18, 12, 22, 19, 22, 24, 27, 23, 23, 15, 14, 19, 14, 0, -4, -5, -18, -26, -31, -50, -58, -57, -75, -79, -102, -128, -113 };

#endif	/* Z2N5_HARMONICS256_INT8_H_ */"