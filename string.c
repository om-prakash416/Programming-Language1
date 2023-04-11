#include<stdio.h>
#include<string.h>
int main(){
//  char arr[]="college wallah";
//  char arr[]="college wallah is the best channel for coders\0";
    // char arr[]={'H','e','l','l','o'};
    // char str[20]="collgewallah";
    // str[0]='b';
    // int i=0;
    // while(i<14){
        // while (arr[i]!='\0'){
            // while(str[i]!='\0'){
                // char str[]="college wallah is the best ";
        // printf("%s",str);
        // puts(str);
    //     i++;
    // }
    char str[40];
    // scanf("%s",str);// only first word wll be considered
    gets(str);// entire sentence can be input 
    printf(" your input was : %s",str);
    return 0;
}