#include <stdio.h>
int main() 
{
 int a[20],n,i,j,g,l;
 printf("enter the size of array\n");
 scanf("%d",&n);
 printf("enter the array \n");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
     g=a[1];
     l=a[1];
 }
 
 for(j=0;j<n;j++)
 {
     if(a[j]>g)
     g=a[j];
     else if(a[j]<l)
     l=a[j];
 }
 printf("the greatest= %d \n the smallest= %d",g,l);
}

  
