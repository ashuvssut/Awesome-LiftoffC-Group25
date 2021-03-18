#include <stdio.h> 
int f(int); 
void main()
{
 int no,fact; 
  	printf("Enter a number\n");
  	scanf("%d",&no);
  	forial=f(no);
    printf("factorial(%d) = %d\n",no,fact);
} 
int f(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}