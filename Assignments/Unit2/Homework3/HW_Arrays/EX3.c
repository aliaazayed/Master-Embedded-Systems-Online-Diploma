
#include <stdio.h>

int main(void)
{
	
	printf("Enter rows and column of matrix: ");
	int r,c;
	scanf("%d %d",&r,&c);
	int a [r][c];
	
	printf("Enter the elements of  matrix: \n");
	int i,j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter elements a%d%d: ",(i+1),(j+1));
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Entered matrix \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Transpose of matrix\n");
	for(i=0; i<c; i++)
	{
		for(j=0; j<r; j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	
	
	return 0;
}
