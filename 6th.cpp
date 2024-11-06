//kth Largest and Smallest
#include <stdio.h>
int main()
{
	int i,n,j,k,t,s=0;
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
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("Enter value of k");
	scanf("%d",&k);
	printf("%dth Smallest = %d \n",k,a[k-1]);
	printf("%dth Largest = %d",k,a[n-k]);
	return 0;
}
