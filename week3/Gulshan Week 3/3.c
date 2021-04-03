#include <stdio.h>
int lng(int,int);
int main()
{
	int p,q,a,lcm;
	printf("Enter 2 numbers : ");
	scanf("%d %d",&p,&q);
	a=lng(p,q);
	lcm=p*q/a;
	printf("\nGCD of input two no.is %d \n",a);
	printf("LCM of input two no.is %d \n",lcm);
}

int lng(int x,int y)
{ 
	if(x%y==0)
	return y;
	else 
	lng(y,x%y); 
}
