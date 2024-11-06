// Copy
#include <stdio.h>
int main()
{
	int i,n,c,j;
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter %d elements for Array\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Array: ");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
	b[i]=a[i];
	printf("Copied Array:");
	for(i=0;i<n;i++)
	printf("%d\t",b[i]);
	return 0;
}
