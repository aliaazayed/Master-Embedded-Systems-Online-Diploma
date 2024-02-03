
#include <stdio.h>

struct S_Distance{
	float feet;
	float inch;
};

int main(void)
{
	
	struct S_Distance distance_t1;
	printf("Enter information for 1st distance \n");
	printf("Enter feet: ");
	scanf("%f",&distance_t1.feet);
	printf("Enter inch: ");
	scanf("%f",&distance_t1.inch);
	
	struct S_Distance distance_t2;
	printf("Enter information for 2nd distance \n");
	printf("Enter feet: ");
	scanf("%f",&distance_t2.feet);
	printf("Enter inch: ");
	scanf("%f",&distance_t2.inch);
	
	printf("Sum of distance= %.2f \"%.2f\"",(distance_t1.feet+distance_t2.feet),(distance_t1.inch-distance_t2.inch));

	
	
	return 0;
}
