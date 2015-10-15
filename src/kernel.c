#include "include/screen.h"
#include "include/keyboard.h"
#include "include/string.h"

kmain() {
	clearScreen();
	for(;;) {
		print("MyrtleDOS> ");
		string command = readString();
		switch (command) {
			case "info":
				print("MyrtleOS is an open-source OS, made in C with a sprinkle of Assembly.\n Look at my insides at github.com/finnthomas/MyrtleOS");
				break;
			case "cls":
				clearScreen();
				break;
			default:
				print("Sorry - I don't know what that means :-(");
				break;
		}
	}
}
