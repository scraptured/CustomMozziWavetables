#ifndef Z3N1_256_INT8_H_
#define Z3N1_256_INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"

#define Z3N1_256_NUM_CELLS 256
#define Z3N1_256_SAMPLERATE 256

CONSTTABLE_STORAGE(int8_t) Z3N1_256_DATA []  =
        { 0, 27, 31, 30, 32, 32, 32, 32, 31, 34, 32, 34, 35, 34, 34, 34, 35, 33, 34, 36, 36, 35, 34, 37, 37, 36, 36, 36, 35, 41, 39, 39, 40, 39, 38, 40, 39, 40, 42, 40, 43, 41, 41, 43, 44, 43, 42, 45, 44, 44, 48, 43, 46, 46, 47, 48, 48, 51, 51, 50, 50, 53, 52, 52, 53, 54, 55, 56, 59, 57, 60, 59, 61, 65, 64, 65, 65, 68, 71, 73, 74, 78, 82, 89, 102, 128, 73, 64, 55, 50, 44, 41, 40, 37, 33, 33, 31, 28, 29, 27, 25, 24, 25, 20, 21, 19, 18, 18, 17, 16, 14, 14, 13, 12, 16, 11, 8, 10, 8, 6, 5, 4, 5, 4, 0, 3, 2, 1, 0, -1, -2, -3, 0, -4, -5, -4, -5, -6, -8, -10, -8, -11, -16, -12, -13, -14, -14, -16, -17, -18, -18, -19, -21, -20, -25, -24, -25, -27, -29, -28, -31, -33, -33, -37, -40, -41, -44, -50, -55, -64, -73, -128, -102, -89, -82, -78, -74, -73, -71, -68, -65, -65, -64, -65, -61, -59, -60, -57, -59, -56, -55, -54, -53, -52, -52, -53, -50, -50, -51, -51, -48, -48, -47, -46, -46, -43, -48, -44, -44, -45, -42, -43, -44, -43, -41, -41, -43, -40, -42, -40, -39, -40, -38, -39, -40, -39, -39, -41, -35, -36, -36, -36, -37, -37, -34, -35, -36, -36, -34, -33, -35, -34, -34, -34, -35, -34, -32, -34, -31, -32, -32, -32, -32, -30, -31, -27 };

#endif	/* Z3N1_256_INT8_H_ */"