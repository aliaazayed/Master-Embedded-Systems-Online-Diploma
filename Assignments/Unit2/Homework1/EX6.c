
#include <stdio.h>

int main(void)
{
	printf("Enter value of a: ");
	float a;
	scanf("%f",&a);
	printf("Enter value of b: ");
	float b;
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a = %f \nAfter swapping, value of b =%f ",a,b);
           
	return 0;
}
