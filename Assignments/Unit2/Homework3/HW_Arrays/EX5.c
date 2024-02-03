
#include <stdio.h>

int main(void)
{
	
	printf("Enter no of elemnts: ");
	int n;
	scanf("%d ",&n);
	int a [n];
	
	int i;
	for(i=0; i<n; i++)
	{
	scanf("%d",&a[i]);
	}
	
	printf("Enter the element to be searched: ");
	int e;
	scanf("%d",&e);
	
	for(i=0; i<n; i++)
	{
		if(a[i]== e)
		{
		printf("Number found at the location = %d",(i+1));
	    break;
		}
	}
	
	if(i==n)
		printf("Number not found ");

	return 0;
}
