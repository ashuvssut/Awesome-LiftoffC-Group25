#include <stdio.h>
int square(int);
int main() {
    int a,sq;
    printf("enter a number\n");
    scanf("%d",&a);
    sq=square(a);
    printf("sqaure of %d = %d",a,sq);
}
int square(int a)
{ int s;
s=a*a;
    return (s);
}