#include "print.h"
#include "types.h"

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
