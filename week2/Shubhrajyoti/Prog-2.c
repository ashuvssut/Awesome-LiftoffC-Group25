/*Program to print the sum of all the even elements and even position elements in an array */

#include<stdio.h>
int main()
{
    int SUM=0,arr[9],i;
    printf("Enter an array :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(i%2==0)
            SUM+=arr[i];
        else
            {
              if(arr[i]%2==0)
                SUM+=arr[i];
              else
                SUM+=0;
            }
    }
    printf("\nThe sum of even elements and even position elements of entered array = %d",SUM);
    return 0;
}
