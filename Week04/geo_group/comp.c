#include <stdio.h>

/**
 * w = 4
 * 1111(-1) > 0000(0)
 * 1111(15) > 0000(0)
 * 4 byte => w = 64
 * (2^64 - 1 > 0)
 */

int main(void) {
	if (-1 < 0u) {
		puts("True");
	} else {
		puts("Fasle");
	}

	return 0; 
}
