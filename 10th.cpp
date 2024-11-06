//Duplicate Elements
#include <stdio.h>
int main()
{
	int i,n,j,c=0;
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements for Array\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Array: ");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d ",a[i]);
				c++;
				break;
			}
		}
	}
	if(c==0)
	printf("No Duplicate Elements found");
	return 0;
}
