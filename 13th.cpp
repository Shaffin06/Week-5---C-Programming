#include <stdio.h>
int main()
{
	int i,j,n,c=0,s;
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements for Array\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Array: ");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
	printf("Enter required sum");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[i]+a[j]==s)
			printf("%d %d\n",a[i],a[j]);
		}
	}
	return 0;
}
