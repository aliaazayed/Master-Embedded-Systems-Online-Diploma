
#include <stdio.h>

int main(void)
{
	printf("Enter a number: ");
	float n;
    scanf("%f",&n);
	if(n>0)
		printf("%f is positive",n);
	else if(n==0)
		printf("You entered zero");
	else
		printf("%f is negative",n);
	return 0;
}
