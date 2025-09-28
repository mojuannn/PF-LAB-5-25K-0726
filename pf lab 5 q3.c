#include <stdio.h>

int main () {
	
	int x,y,z;
	int step1,step2,step3,step4,step5,step6,step7,step8,step9;
	
	printf("Enter a number:");
	scanf("%d",&x);
	
	printf("Enter a number:");
	scanf("%d",&y);
	
	printf("Enter a number:");
	scanf("%d",&z);
	
	printf("This is the Operator Precedence: \n");
	
	
	step1 = y*z;
	printf("1) y * z = %d \n",step1);
	
	step2 = x + step1;
	printf("2) x + y*z = %d \n", step2);
	
	step3 = step2 > 10;
	printf("3) x + y*z > 10 = %d \n",step3);
	
	step4 = x-z;
	printf("4) x - z = %d \n",step4);
	
	step5 = step4 < y;
	printf("5) x-z > y = %d \n",step5);
	
	step6 = step2 && step5;
	printf("6) x+y*z > 10 && x-z<y = %d \n", step6);
	
	step7 = y % z;
	printf("7) y %% z = %d \n",step7);
	
	step8 = !step7;
	printf("8) !(y%%z) = %d \n",step8);
	
	step9 = step6 || step8;
	printf("9) x + y * z > 10 && x - z < y || !(y %% z) = %d \n",step9);
	
	
	
	return 0;
}
