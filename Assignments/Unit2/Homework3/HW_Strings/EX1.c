
#include <stdio.h>
#include <string.h>
int main(void)
{
	
	printf("Enter a string: ");
	char str[100];
	gets(str);
	
	printf("Enter a character to find frequency: ");
	char c;
	fflush(stdin);  fflush(stdout);
	scanf("%c",&c);

	int count=0,i=0;
	while(i< sizeof(str))
	{
		if(str[i] ==c )
		{
			count++;
		}
		i++;
	}
	printf("Frequency of %c = %d  ",c,count);

	return 0;
}
