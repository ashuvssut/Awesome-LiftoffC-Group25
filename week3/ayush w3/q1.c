//1:-
#include <stdio.h>
void sqr(int);
int main()
{int n;
printf("Enter a No.-\n");
scanf("%d",&n);
sqr(n);
}
void sqr(int y)
{  int res;
res=y*y;
printf("Square of input no.is %d",res);
}

