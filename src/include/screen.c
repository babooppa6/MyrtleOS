#include "screen.h"
#include "types.h"

void clearLine(uint8 from, uint8 to) {
        const char* vidmem = (const char*)0xb8000;
        for (uint16 i = (sw * from * sd); i < (sw * to * sd); i++) {
                vidmem[i] = 0x0;
        }
}

void clearScreen() {
	clearLine(0, sh - 1);
}

void print(string str) {
	char* vidmem[] = (char*)0xB8000; // access video memory 
	while (*str)  {
		int pos = (y * 2) + x; // Get position
		vidmem[pos]   = *str; // Print char
		vidmem[pos++] = 0x07; // Colour
		if (*str == '\n') { // If newline
			y++;
			x = 0;
		} else if (*str == '\t'){ // If tab
			x += 10;
		} else {
			x += 2;
		}
	}
}

void print(string str, char colour) {
	char* vidmem[] = (char*)0xB8000; // access video memory 
	while (*str)  {
		int pos = (y * 2) + x; // Get position
		vidmem[pos]   = *str; // Print char
		vidmem[pos++] = colour; // Colour (passed as an argument)
		if (*str == '\n') { // If newline
			y++;
			x = 0;
		} else if (*str == '\t'){ // If tab
			x += 10;
		} else {
			x += 2;
		}
	}
}

void printch(char ch) {
	char* vidmem[] = (char*)0xB8000; // access video memory 
	int pos = (y * 2) + x; // Get position
	vidmem[pos]   = *str; // Print char
	vidmem[pos++] = 0x07; // Colour
	if (*str == '\n') { // If newline
		y++;
		x = 0;
	} else if (*str == '\t'){ // If tab
		x += 10;
	} else {
		x += 2;
	}
}

