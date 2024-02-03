
#include <stdio.h>

int power(int base, int pow)
{
	int i;
	if (pow==1)
		return base;
	else
	{
		
		return base*power(base,pow-1);
	}
}
			
int main(void)
{
	
	printf("Enter base number: ");
	int base;
	scanf("%d",&base);
	
	printf("Enter power number: ");
	int pow;
	scanf("%d",&pow);
	
	printf(" %d^%d = %d", base,pow,power(base,pow));
	return 0;
}
