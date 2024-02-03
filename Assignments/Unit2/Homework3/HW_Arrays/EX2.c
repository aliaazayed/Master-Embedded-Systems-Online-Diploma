
#include <stdio.h>

int main(void)
{
	int n;
	
	printf("Enter the number of data: ");
	scanf("%d",&n);
	
	float a[n],sum=0, average=0;
	int i;
	for(i=0; i<n; i++)
	{
	printf("%d.Enter a number: ",(i+1));
	scanf("%f",&a[i]);
	sum+=a[i];
	}
	average =sum/n;
	printf("Average = %.2f",average);
	
	return 0;
}
