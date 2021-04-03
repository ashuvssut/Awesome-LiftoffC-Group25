//2:-Factorial of a number
#include <stdio.h>
int fac(int);
int main()
{int n,res;
printf("Enter a No.-\t");
scanf("%d",&n);
res=fac(n);
printf("Factorial of input no.is %d",res);
}
int fac(int y)
{  int f=1;
while(y>0)
{
f=f*y;
y--;
}
return f;
}

