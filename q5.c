//5:-Palindrome using recursion
#include <stdio.h>
int plan(int);
int main()
{int p,res;
printf("Input a value.-\n");
scanf("%d",&p);
res=plan(p);
if(res==p)
printf(" %d no.is Palindrome\n",p);
else
printf(" %d no.Not A Palindrome\n",p);
}
int plan(int a)
{int rev=0,rem;
while(a!=0)
{rem=a%10;
rev=rev*10 + rem;
plan(a/10);}
return rev;
}
