//1.Write a C program to enter two numbers and perform all arithmetic operations.
#include <stdio.h>
void main(){
    int m,n,add,sub,mod,multi;
    float div;
    printf("Enter any 2 no.s:");
    scanf("%d %d",&m,&n);
add=m+n;
sub=m-n;
multi=m*n;
mod=m%n;
div=m/(float)n;
printf("ADDITION IS= %d\n",add);
    printf("SUBTRACTION IS = %d\n", sub);
    printf("MULTIPLICATION IS = %d\n", multi);
    printf("MODULUS IS = %d\n",mod);
    printf("DIVISION IS = %f\n",div);
}