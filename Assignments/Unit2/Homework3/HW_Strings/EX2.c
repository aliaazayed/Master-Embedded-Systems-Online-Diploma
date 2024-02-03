
#include <stdio.h>
#include <string.h>
int main(void)
{
	
	printf("Enter a string: ");
	char str[100];
	gets(str);

	int i=0;
	while(str[i] !='\0')
	{
		i++;
	}
	printf("Length of String : %d  ",(i));

	return 0;
}
