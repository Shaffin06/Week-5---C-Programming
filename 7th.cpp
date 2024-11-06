//Occurence
#include <stdio.h>
int main()
{
	int i,n,c=0,k;
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements for Array\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Array: ");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
	printf("Number = ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		c++;
	}
	printf("Occurence of %d = %d",k,c);
	return 0;
}
	
