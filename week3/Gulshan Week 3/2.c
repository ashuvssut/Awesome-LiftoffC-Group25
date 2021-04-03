#include <stdio.h>
int fac(int);
int main()
{
	int n,a;
	printf("Enter a No. : ");
	scanf("%d",&n);
	a=fac(n);
	printf("\nFactorial of the no.is %d",a);
}

int fac(int x)
{ 
	int f=1;
	while(x>0)
	{
		f=f*x;
		x--;
	}
	return f;
}

