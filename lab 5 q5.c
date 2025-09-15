#include <stdio.h>

int main() {
	int a,b,c;
	
	printf("Enter Student 1 marks: ");
	scanf("%d",&a);
	printf("Enter Student 2 marks: ");
	scanf("%d",&b);
	printf("Enter Student 3 marks: ");
	scanf("%d",&c);
	
	(a>b && a>c)? printf("Student 1 has the highest marks %d",a): (b>a && b>c)? printf("Student 2 has the highest marks %d",b): printf("Student 3 has the highest marks %d",c);
	
	return 0;
}
