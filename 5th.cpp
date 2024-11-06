//Elements in Reverse
#include <stdio.h>
int main()
{
	int i,n,t,s=0;
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements for Array\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Array: ");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	printf("Updated Array:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
