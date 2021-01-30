#ifndef Z5N3_HARMONICS256_INT8_H_
#define Z5N3_HARMONICS256_INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"

#define Z5N3_HARMONICS256_NUM_CELLS 256
#define Z5N3_HARMONICS256_SAMPLERATE 256

CONSTTABLE_STORAGE(int8_t) Z5N3_HARMONICS256_DATA []  =
        { 0, 70, 73, 64, 55, 59, 46, 42, 31, 29, 26, 9, 4, 7, 2, -9, -15, -15, -20, -18, -18, -26, -24, -24, -20, -20, -22, -24, -9, -7, -15, 0, -9, -7, 9, 7, 9, 13, 22, 22, 29, 26, 35, 42, 48, 37, 46, 42, 37, 35, 13, -70, -110, -90, -68, -51, -40, -29, -18, -13, -4, -7, 7, 18, 13, 22, 29, 20, 31, 18, 26, 29, 22, 29, 24, 15, 9, 13, 4, 13, 2, -7, -7, -11, -9, -24, -18, -26, -20, -22, -31, -31, -31, -33, -31, -24, -26, -26, -11, -2, 4, 37, 127, 121, 81, 46, 29, 13, 4, -4, -11, -11, -24, -13, -15, -24, -26, -26, -22, -33, -22, -15, -24, -15, -15, -7, -2, -4, 0, 4, 2, 7, 15, 15, 24, 15, 22, 33, 22, 26, 26, 24, 15, 13, 24, 11, 11, 4, -4, -13, -29, -46, -81, -121, -127, -37, -4, 2, 11, 26, 26, 24, 31, 33, 31, 31, 31, 22, 20, 26, 18, 24, 9, 11, 7, 7, -2, -13, -4, -13, -9, -15, -24, -29, -22, -29, -26, -18, -31, -20, -29, -22, -13, -18, -7, 7, 4, 13, 18, 29, 40, 51, 68, 90, 110, 70, -13, -35, -37, -42, -46, -37, -48, -42, -35, -26, -29, -22, -22, -13, -9, -7, -9, 7, 9, 0, 15, 7, 9, 24, 22, 20, 20, 24, 24, 26, 18, 18, 20, 15, 15, 9, -2, -7, -4, -9, -26, -29, -31, -42, -46, -59, -55, -64, -73, -70 };

#endif	/* Z5N3_HARMONICS256_INT8_H_ */"