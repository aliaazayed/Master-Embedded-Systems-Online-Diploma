
#include <stdio.h>

#define AREA(r) 3.14*2*r

int main(void)
{
	
	printf("Enter the redius: ");
	int r;
	scanf("%d",&r);
	
	printf("Area=%.2f ",AREA(r));
	
	
	return 0;
}
