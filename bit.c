#include <stdio.h>
int bitAnd(int x, int y) {
	int var1 = ~x;
	int var2 = ~y;
	
	int var3 = var1 | var2;
	
	int var4 = ~var3;
	
	return var4;
}

int bitXor(int x, int y) {
	int var1 = ~x;
	int var2 = ~y;
	
	int var3 = x & y;
	int var4 = var1 & var2;
	
	int var5 = ~var3 & ~var4;
	
	return var5;
}

int isEqual(int x, int y) {
	int var1 = x ^ y;
	int var2 = !var1;
	
	return var2;
}

int evenBits(void) {
	int val1 = 0xAA;
	int val2 = (val1 << 8) + val1;
	int val3 = (val2 << 16) + val2;
	return val3;
}

int bitMask(int highbit, int lowbit) {
	int val1 = -1;
	int val2 = val1 << (highbit + 1);
	int val3 = val1 << lowbit;
	int val4 = val2 ^ val3;
	return val4;
}

int bitParity(int x) {
	int var1 = x;
	var1 ^= (var1 >> 16);
	var1 ^= (var1 >> 8);
	var1 ^= (var1 >> 4);
	var1 ^= (var1 >> 2);
	var1 ^= (var1 >> 1);
	return var1;
}

int main() {
	
	printf("bitAnd(6, 5) = %i \n", bitAnd(6, 5));
	printf("bitXor(4, 5) = %i \n", bitXor(4, 5));
	printf("isEqual(5, 5) = %i \n", isEqual(5, 5));
	printf("isEqual(4, 5) = %i \n", isEqual(4, 5));
	printf("evenBits = 0x%X \n", evenBits());
	printf("bitMask(5,3) = 0x%X \n", bitMask(5, 3));
	printf("bitParity(5) = %i \n", bitParity(1));
	return 0;
}

