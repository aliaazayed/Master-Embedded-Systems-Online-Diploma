
#include <stdio.h>
#include <string.h>

char* reversed(char s[],int n)
{
	char reverse[n];
	int j=n-1,i=0;
	if(j==0)
	{
		reverse[i]=s[j];
		return reverse;
	}
		
	else
	{
		reverse[i]=s[j];
		i++;
		j--;
		return reversed(s,j);
	}
	
}
			
int main(void)
{
	
	printf("Enter a sentence: ");
	char s[100];
	gets(s);
	int n= strlen(s);
	char *ps = reversed(s,n);
	s[0]= *ps;
	printf("%s",s);
	
	return 0;
}
