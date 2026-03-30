int main(void) {
	// Expanding. Going from samller container to bigger one
	//
	// 2 bytes -> 16 bits
	short x = 15213;

	// 4 bytes -> 32 bits
	int ix = x;

	/**
	 * w = 6 10 0010 => 32 + 2 = 34
	 * new_short s = 34;
	 *
	 * w = 4 0010 => 2
	 * super_duper_short p = s;
	 */
	int x = 1421341221; // 11...10
	short y = x;		// 
}
