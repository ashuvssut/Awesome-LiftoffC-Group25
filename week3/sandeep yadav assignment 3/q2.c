#include <stdio.h>
int fact(int);
int main() {
    int a,sq;
    printf("enter a number\n");
    scanf("%d",&a);
    sq=fact(a);
    printf("factorial of %d = %d",a,sq);
}
int fact(int a)
{ int s=1;
 for(int i=1;i<=a;i++)
 {
     s*=i;
 }
    return (s);
}