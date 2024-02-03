
#include <stdio.h>

int main(void)
{
	printf("Enter an integer :");
	signed int n;
	long long fact=1;
    scanf("%d",&n);
	if(n<0)
	  printf("Error!!! Factorial of negative number doesn't exist.");
    else
	{		
	    for(int i=1; i<=n; i++)
	    {
	    	fact*=i;
	    }
	   printf("factorial = %lld",fact);
	}
	return 0;
}
