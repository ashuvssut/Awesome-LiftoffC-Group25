//3.Write a C program to enter the radius of a circle and find its diameter,circumference and area.
#include <stdio.h>
int main()
{
    int r,d;
    float circum,area;
printf("\nRadius of Circle:");
scanf("%d",&r);
d=r*2;
circum=2*3.14*r;
area=3.14*r*r;
printf("Diameter of Cirle is %d\n",d);
printf("Circumference of Cirle is %f\n",circum);
printf("Area of Circle is %f\n",area);
}