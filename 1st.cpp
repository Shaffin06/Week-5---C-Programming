//Min, Max, Avg
#include <stdio.h>
int main()
{
	int i,n,s=0;
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements for Array\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	s=s+a[i];
	printf("Avg= %d",s/n);
}