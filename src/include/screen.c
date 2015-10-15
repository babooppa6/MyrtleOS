#include "screen.h"

void clearLine(uint8 from, uint8 to) {
        uint16 i = (sw * from * sd);
        const char* vidmem = (const char*)0xb8000;
        for(i; i < (sw * to * sd); i++) {
                vidmem[i] = 0x0;
        }
}

void clearScreen() {
	clearLine(0, sh - 1);
}
