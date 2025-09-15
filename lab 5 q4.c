#include <stdio.h>
#include <math.h>



int main() {
	float rad;
	
	printf("Enter the radius of the water tank: ");
	scanf("%f",&rad);
	
	
	float area = M_PI * pow(rad,2);
	float circ = 2 * M_PI * rad;
	float root = sqrt(rad);
	
	printf("Your radius is: %.2f \n",rad);
	printf("Your circumference is: %.2f \n",circ);
	printf("Your square root is: %.2f \n",root);
	
	return 0;
}
