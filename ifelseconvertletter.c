#include<stdio.h>
main(){
    char ch;
    printf("\n enter any character: ");
    scanf("%c",&ch);
    if(ch>="A"&& ch<="Z")
    printf("\n the entered character was in upper case.In lower case it is:%c",(ch+32));
    else
    printf("\n the entered character was in lower case.In upper case it is:%c",(ch-32));
    return 0;
}