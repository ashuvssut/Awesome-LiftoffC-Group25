#include <stdio.h>
int fact(int);
int main()
{
	int n,a;
	printf("Enter a number.-\n");
	scanf("%d",&n);
	a=fact(n);
	printf("Factorial of given no.is %d \n",a);
}
int fact(int x)
{
	if (x==1 || x==0)
	return 1;
	else
	return(x*fact(x-1)); 
}
