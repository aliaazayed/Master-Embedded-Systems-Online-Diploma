
#include <stdio.h>

int main(void)
{
	printf("Enter an integer you want to check:");
	int n;
    scanf("%d",&n);
	if(n%2==0)
		printf("%d is even.",n);
	else
		printf("%d is odd.",n);
	return 0;
}
