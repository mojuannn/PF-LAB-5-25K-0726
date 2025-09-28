#include <stdio.h>

int main () {
	
	printf("(a & b) | (a ^ b)");
	printf("\n Assuming a = 6, b = 4");
	printf("\n Step 1. Convert the numbers into binary form: a = 0110, b = 0100");
	printf("\n Step2. (a & b) = 0110 & 0100 = 0100");
	printf("\n Step3. (a ^ b) = 0110 ^ 0100 = 0010");
	printf("\n Step 4. (a & b) | (a ^ b) = 0100 | 0010 = 0110");
	printf("\n Step5. Convert binary to decimal: 0110 = 6");
	
	int a = 6, b = 4;
	printf("\n Answer using compiler: %d", (a & b) | (a ^ b));
}
