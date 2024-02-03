
#include <stdio.h>

int main(void)
{
	printf("Enter Three numbers: ");
	float n1, n2, n3;
    scanf("%f %f %f",&n1, &n2, &n3);
	if((n1>= n2) && (n1>=n3))
		printf("Largest number = %f",n1);
	else if((n2>= n1) && (n2>=n3))
		printf("Largest number = %f",n2);
	else
		printf("Largest number = %f",n3);
	return 0;
}
