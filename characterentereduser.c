#include<stdio.h>
main(){
    char ch;
    printf("\n Press any key: ");
    scanf("%c",&ch);
    if(isalpha(ch>0))
    printf("\n the user has entered a character");
    if(isdigit(ch)>0)
    printf("\n the user has entered a digit");
    if (isprint(ch)>0)
    printf("\n the user has entered a printable character");
    if(ispunct(ch)>0)
    printf("\n the user has entered a punctuation mark");
    if (isspace(ch)>0)    
    printf("\n the user has entered a white space character");
    return 0;
}