
#include <stdio.h>

void prime(int n1, int n2)
{
	printf("prime numbers between %d and %d are:",n1,n2);
	int count=2;
	for (int i=n1; i<=n2; i++)
	{
		if(i ==1 ||i==2 )
		{
		printf("%d ",i);
		continue;
		}

		while(count <i)
		{
			if(i%count==0)
			{
			break;
			}
			count++;
		}
		if (count==i)
			printf("%d ",i);
		count=2;
	}
}
			
int main(void)
{
	
	printf("Enter two numbers(intervals): ");
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	prime(n1,n2);
	
	return 0;
}
