//3:-GCD and LcM
#include <stdio.h>
int gclcm(int,int);
int main()
{int p,q,res,lcm;
printf("Input two values.-\n");
scanf("%d %d",&p,&q);
res=gclcm(p,q);
lcm=p*q/res;
printf("GCD of input two no.is %d \n",res);
printf("LCM of input two no.is %d \n",lcm);
}
int gclcm(int a,int b)
{ if(a%b==0)
return b;
else 
gclcm(b,a%b); }
