#ifndef SCREEN_H
#define SCREEN_H
#include "types.h"
const uint8 sw = 80, sh = 25, sd = 2; // Screen dimensions
void clearLine(uint8 from, uint8 to);
void clearScreen();
void print(string str);
void print(string str, char colour);
#endif
