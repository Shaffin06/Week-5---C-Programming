#include <stdio.h>
int main()
{
	int i,n,k,p;
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements for Array\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Array: ");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
	printf("Enter position to insert: ");
	scanf("%d",&p);
	printf("Enter integer to insert: ");
	scanf("%d",&k);
	for(i=n;i>=p;i--)
	a[i]=a[i-1];
	a[p-1]=k;
	n++;
	printf("Updated Array: ");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
}
	
