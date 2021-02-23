//4:-
#include <stdio.h>
int main() {
int Phy,Chem,Bio,Math,Comp,marks;
float percentage;

printf("Enter your mark in  subjects:");
scanf("%d%d%d%d%d",&Phy,&Chem,&Bio,&Math,&Comp);

marks=Phy+Chem+Bio+Math+Comp;
percentage=marks/(float)500*100;
if(percentage >= 90)
{printf(" You got A grade"); }
else if ( percentage >=80){ printf(" You got B grade"); }
else if ( percentage>=70) {printf(" You got C grade");}
else if (percentage>=60){ printf("You got D grade"); }
else if ( percentage>=40){printf("You got E grade"); }
else 
{printf("You got F grade"); }
}