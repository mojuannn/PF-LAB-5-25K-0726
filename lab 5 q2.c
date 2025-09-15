#include <stdio.h>

int main() {
	int a;
	
	printf("Enter a number: ");
	scanf("%d",&a);
	
	(a%2== 0)? printf("Even"): (a%3 == 0)? printf("Divisible by 3"): printf("Odd and divisible by 3");
	
	return 0;
}
