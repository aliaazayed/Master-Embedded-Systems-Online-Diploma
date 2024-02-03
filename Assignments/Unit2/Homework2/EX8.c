
#include <stdio.h>

int main(void)
{
	printf("Enter operator either + or - or * or divide:");
	char c;
	scanf("%c",&c);
	
	printf("Enter two operands:");
	float n1, n2;
	scanf("%f %f",&n1,&n2);
	
	switch (c)
	{
		case '-' : printf("%f - %f = %f",n1,n2,(n1-n2));  break;
		case '+' : printf("%f + %f = %f",n1,n2,(n1+n2));  break;
		case '*' : printf("%f * %f = %f",n1,n2,(n1*n2));  break;
		case '/' : printf("%f / %f = %f",n1,n2,(n1/n2));  break;
        default  : printf("Invalid operator"); 
	}
	return 0;
}
