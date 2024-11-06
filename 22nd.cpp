#include <stdio.h>
int main()
{
	int r,c,i,j;
	printf("Enter number of rows: ");
	scanf("%d",&r);
	printf("Enter number of columns: ");
	scanf("%d",&c);
	printf("Enter elements for Matrix A: \n");
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements for Matrix B: \n");
	int b[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("Sum of Both Matrices: \n");
	int m[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

