#include <stdio.h>
void sqrt(int);
int main()
{
	int n;
	printf("Enter a no. : ");
	scanf("%d",&n);
	sqrt(n);
}
	void sqrt(int a)
	{  int b;
		b=a*a;
		printf("\nSquare of the no.is %d",b);
	}

