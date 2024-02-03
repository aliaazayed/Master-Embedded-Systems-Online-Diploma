
#include <stdio.h>

struct S_Student{
	char name[50];
	int roll;
	float marks;
};

int main(void)
{
	
	struct S_Student student_t;
	printf("Enter information of students: \n");
	
	printf("Enter name: ");
	scanf("%s",&student_t.name);
	printf("Enter roll number: ");
	scanf("%d",&student_t.roll);
	printf("Enter marks: ");
	scanf("%f",&student_t.marks);
	
	printf("Displaying information  \n");
	printf("Ename: %s\n",student_t.name);
	printf("Roll: %d\n",student_t.roll);
	printf("Marks: %.2f\n",student_t.marks);

	
	
	return 0;
}
