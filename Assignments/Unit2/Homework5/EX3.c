
#include <stdio.h>

struct S_complex{
	float real;
	float im;
};

int main(void)
{
	
	struct S_complex complex_t1;
	printf("For 1st complex number \n");
	printf("Enter real and imaginary respectively \n");
	scanf("%f",&complex_t1.real);
	scanf("%f",&complex_t1.im);
	
	struct S_complex complex_t2;
	printf("For 2nd complex number \n ");
	printf("Enter real and imaginary respectively \n");
	scanf("%f",&complex_t2.real);
	scanf("%f",&complex_t2.im);
	
	printf("Sum = %.2f+%.2fi",(complex_t1.real+complex_t2.real),(complex_t1.im+complex_t2.im));

	
	
	return 0;
}
