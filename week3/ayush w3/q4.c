//4:-Fac using recursion
#include <stdio.h>
int fac(int);
int main()
{int p,res;
printf("Input a value.-\n");
scanf("%d",&p);
res=fac(p);
printf("Factorial of input no.is %d \n",res);
}
int fac(int a)
{if (a==1 || a==0)
return 1;
else
return(a*fac(a-1)); 
}
