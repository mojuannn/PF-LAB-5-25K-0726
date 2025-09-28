#include <stdio.h>

int main () {
	
	int vov = 0, con = 0;
	char c1,c2,c3;
	
	printf("Enter first letter: ");
	scanf(" %c", &c1);
	
	printf("Enter second letter: ");
	scanf(" %c", &c2);
	
	printf("Enter third letter: ");
	scanf(" %c", &c3);
	
	if (c1 == 'A' || c1 == 'a' || c1 == 'E' || c1 == 'e' || c1 == 'I' || c1 == 'i' || c1 == 'O' || c1 == 'o' || c1 == 'U' || c1 == 'u') {
		vov++;
	} else {
		con++;
	}
	
	if (c2 == 'A' || c2 == 'a' || c2 == 'E' || c2 == 'e' || c2 == 'I' || c2 == 'i' || c2 == 'O' || c2 == 'o' || c2 == 'U' || c2 == 'u') {
		vov++;
	} else {
		con++;
	}
	
	
	if (c3 == 'A' || c3 == 'a' || c3 == 'E' || c3 == 'e' || c3 == 'I' || c3 == 'i' || c3 == 'O' || c3 == 'o' || c3 == 'U' || c3 == 'u') {
		vov++;
	} else {
		con++;
	}
	
	printf("The number of consonants are: %d \n",con);
	printf("The number of vowels are: %d\n",vov);
	
	return 0;
	
}
