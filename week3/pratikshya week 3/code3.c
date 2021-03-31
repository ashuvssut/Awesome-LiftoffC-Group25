#include <stdio.h>
int main()
{
    int a,b,hcf,lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    hcf=gcd(a,b);
    printf("GCD:%d",hcf);
    printf("\nLCM: %d",(a*b)/hcf);
    return 0;
}

int gcd(a,b) {
    if (b!= 0)
        return gcd(b,a%b);
    else
        return a;
}