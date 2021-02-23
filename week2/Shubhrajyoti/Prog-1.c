/*Program to input a number and print the sum of its digits*/

#include<stdio.h>
int main()
{
    int n,a,sum;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0)
    {
       a=n%10;
       sum+=a;
       n/=10;
    }
    printf("\nSum of digits of %d = %d",n,sum);
    return 0;
}
