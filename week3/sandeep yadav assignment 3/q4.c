#include <stdio.h>
int fact(int);
int main() {
  int n,p;
    printf("enter an integer");
    scanf("%d",&n);
   p=fact(n);
   printf("\nfactorial of%d=%d",n,p);
    return 0;
}
int fact(int n)
{
    
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;

}