
#include <stdio.h>

int factorial(int n)
{
	int i;
	if (n==1)
		return n;
	else
	{
		
		return n*factorial(n-1);
	}
}
			
int main(void)
{
	
	printf("Enter a positive integer: ");
	int n1;
	scanf("%d",&n1);
	
	printf("Factorial of %d = %d", n1,factorial(n1));
	return 0;
}
