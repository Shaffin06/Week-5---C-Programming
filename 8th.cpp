// Delete Duplicate
#include <stdio.h>
int main()
{
	int i,n,c,j,k=0;
	scanf("%d",&n);
	int a[n],b[100];
	printf("Enter %d elements for Array\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Array: ");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			c++;
		}
		if(c==1)
		{
			b[k]=a[i];
			k++;
		}
	}
	printf("Updated Array:");
	for(i=0;i<n;i++)
	printf("%d\t",b[i]);
	return 0;
}
//Not Done Yet
