#include<stdio.h>
int func(int);
int main()
{
int n, sq;
printf("\n Enter number : ");
scanf("%d",&n);
sq = func(n);
printf("\n squre of number is : %d ", sq);
}
int func(int x)
{
return x*x;
}