
#include <stdio.h>
#include <string.h>
int main(void)
{
	
	printf("Enter a string: ");
	char str[100];
	gets(str);
	
	int j,i=0;
	j=strlen(str);
	char reverse[j];
	while(i< strlen(str))
	{
		j--;
		reverse[i]=str[j];
		i++;
	}
	printf("Reversed String is : %s ",reverse);

	return 0;
}
