
/*Program to count the total number of words in a string*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char str[100];
    int i, word;

    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    i = 0;
    word = 1;

    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            word++;
        }

        i++;
    }

    printf("Total number of words in the string is : %d\n", word-1);
}
