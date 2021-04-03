#include <stdio.h>
int main() {
   int a,r=0,b;
   printf("enter a number \n");
   scanf("%d",&a);
   b=a;
   while(a!=0)
   {
     a=a/10;
     r++;
   }
   printf("number of digits in %d is %d",b,r);
}
