#ifndef SCREEN_H
#define SCREEN_H
const uint8 sw = 80, sh = 25, sd = 2; // Screen dimensions
void clearLine(uint8 from, uint8 to);
void clearScreen();
#endif
