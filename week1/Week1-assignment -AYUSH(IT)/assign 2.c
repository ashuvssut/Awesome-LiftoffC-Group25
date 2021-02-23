//2.Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
#include <stdio.h>
int main()
{
    float celsius, fahren;
printf("\nTemperature in celsius is:");
scanf("%f",&celsius);

fahren =celsius*9/5+32;
printf("\n Temperature in fahrenheit is: %f", fahren);
}