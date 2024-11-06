#include <stdio.h>
int main()
{
	int i,n,j=0,k=0,c;
	scanf("%d",&n);
	int a[n],o[100],e[100];
	printf("Enter %d elements for Array\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Array: ");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			e[j]=a[i];
			j++;
		}
		else
		{
			o[k]=a[i];
			k++;
		}
	}
	printf("Even Element Array: ");
	for(i=0;i<j;i++)
	printf("%d\t",e[i]);
	printf("\n");
	printf("Odd Element Array: ");
	for(i=0;i<k;i++)
	printf("%d\t",o[i]);
	return 0;
}
