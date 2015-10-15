#include "string.h"
#include "types.h"

bool isEqual(string a, string b) {
	if (length(a) != length(b)) {
		return false;
	} else {
		for (int i = 0; a[i]; i++) {
			if (a[i] != b[i]) {
				return false;
			}
		}
		return true;
	}
}

uint16 length(string str) {
	for (uint16 i = 0; str[i]; i++);
	return i;
}
