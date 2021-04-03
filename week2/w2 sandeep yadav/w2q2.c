#include <stdio.h>
int main() {
    int a[20],i,j,k,n,s1,s2;
    printf("enter the size of array \n");
    scanf("%d",&n);
    printf("enter an array of %d elements\n",n);
    for(i=0;i<n;i++)
  {  scanf("%d",&a[i]);
}
for(j=0;j<n;j+=2)
{
    s1+=a[j];
}
for(k=0;k<n;k++)
{
    if(a[k]%2==0)
    s2+=a[k];
}

printf("the sum of all even position elements=%d \n",s1);
printf("the sum of all even elements=%d",s2);

}
