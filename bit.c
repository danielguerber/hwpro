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
	int var1 = ~x;
	int var2 = ~y;
	
	int var3 = x & y;
	int var4 = var1 & var2;
	
	int var5 = var3 | var4;
	
	int var6 = var5 + ;
	
	return var6;
}

int main() {
	
	printf("bitAnd(6, 5) = %i \n", bitAnd(6, 5));
	printf("bitXor(4, 5) = %i \n", bitXor(4, 5));
	printf("isEqual(5, 5) = %i \n", isEqual(5, 5));
	printf("isEqual(4, 5) = %i \n", isEqual(4, 5));
	
	return 0;
}

