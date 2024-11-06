//Interchange Alternate Elements
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
	for(i=0;i<n-1;i=i+2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	printf("Updated Array:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
