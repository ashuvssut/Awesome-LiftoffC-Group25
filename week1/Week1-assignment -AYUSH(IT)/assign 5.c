//5.Write a C program to check whether an alphabet is vowel or consonant usingswitch case.
#include <stdio.h>
 int main(){
    char alpha;
    printf("Enter a Alphabet:");
    scanf("%c",&alpha);
    if((alpha>='A' && alpha<='Z') || (alpha>='a' && alpha<='z')){
        switch(alpha){
            case 'A':printf("%c is a VOWEL\n",alpha);
            break;
            case 'E':printf("%c is a VOWEL\n",alpha);
            break;
            case 'I':printf("%c is a VOWEL\n",alpha);
            break;
            case 'O':printf("%c is a VOWEL\n",alpha);
            break;
            case 'U':printf("%c is a VOWEL\n",alpha);
            break;
            case 'a':printf("%c is a VOWEL\n",alpha);
            break;
            case 'e':printf("%c is a VOWEL\n",alpha);
            break;
            case 'i':printf("%c is a VOWEL\n",alpha);
            break;
            case 'o':printf("%c is a VOWEL\n",alpha);
            break;
            case 'u':printf("%c is a VOWEL\n",alpha);
            break;
            default:
                printf("%c is a CONSONANT\n",alpha);}
    }
    else{
        printf("%c is not an alphabet.\n",alpha);}
 }