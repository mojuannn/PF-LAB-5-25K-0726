#include <stdio.h>

int main () {
	
	int att;
	char mid,fee;
	
	printf("Whats your attendance percentage: ");
	scanf("%d", &att);
	
	if (att < 75) {
		printf("Student not eligible, attendance too low");
	} else {
		printf("Have you cleared your midterms (P for Pass, F for Fail): ");
		scanf(" %c",&mid);
		
		if (mid == 'F') {
			printf("You failed your mids, not eligible");
		} else {
			printf("Have you paid exam fee (Y for Yes, N for No): ");
			scanf(" %c",&fee);
			
			if (fee == 'N') {
				printf("Please clear your dues to appear in Final exam");
			} else {
				printf ("You are eligible for the final exam");
			}
		}
	}
	
	return 0;
}
