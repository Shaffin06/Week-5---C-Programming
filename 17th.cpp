#include <stdio.h>
int main() 
{
   int n,i,j,t,c=1;
   scanf("%d",&n);
   int a[n];
   printf("Enter %d elements for Array\n",n);
   for(i=0; i<n; i++)
   scanf("%d", &a[i]);
   for(i=0; i<n-1; i++)
   {
       for(j=0; j<n-i-1; j++)
       {
           if (a[j]>a[j+1])
           {
              t= a[j];
              a[j]= a[j+1];
              a[j+1]= t;
           }
       }
   }
   for(i=0;i<n;i++)
   {
       if (a[i]==a[i+1])
       c++;
       else
       {
           printf("frequency of %d is %d\n", a[i], c);
           c=1; 
       }
   }
   return 0;
}
