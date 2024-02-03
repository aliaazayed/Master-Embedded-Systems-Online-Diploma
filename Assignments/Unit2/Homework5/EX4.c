
#include <stdio.h>

struct S_Student{
	char name[50];
	int roll;
	float marks;
};

int main(void)
{
	
	struct S_Student student_t[10];
	printf("Enter information of students: \n");
	for(int i=0; i<10; i++)
	{
	  printf("Enter name: ");
	  scanf("%s",&student_t[i].name);
	  printf("Enter roll number: ");
	  scanf("%d",&student_t[i].roll);
	  printf("Enter marks: ");
	  scanf("%f",&student_t[i].marks);
	}
	
	printf("Displaying information  \n");
	for(int i=0; i<10; i++)
	{
	 printf("Ename: %s\n",student_t[i].name);
	 printf("Roll: %d\n",student_t[i].roll);
	 printf("Marks: %.2f\n",student_t[i].marks);
	}
	
	
	return 0;
}
