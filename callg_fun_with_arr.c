// #include<stdio.h>
    #include<string.h>
// #include<ctype.h>
// void print_upper(char *string);
// int main(void)
// {
//     char s[80];
//     printf("enter a string");
//     gets(s);
//     print_upper(s);
//     printf("\n s is now uppercase: %s,s");
//     return 0;
// }
// /* print a string in uppercase. */
// void printf_upper(char *string)
// {
//     register int t;
//     for (t=0;string[t];++t){
//         string[t]=toupper(string[t]);
//         putchar(string[t]);
//     }
// }
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void print_upper(char *string);
int main(void)
{
    char s[80];
    printf("enter a string: ");
    gets(s);
    printf("\n s is unchanged: %s",s);
    return 0;
}
void print_upper(char *string)
{
    register int t;
    for (t=0;string[t];++t)
    putchar(toupper(string[t]));
}

/* a simple version of the standard gets() library function.*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char *xgets(char *s)
{
    char ch *p;
    int t;
    p=s; /*gets() returns a pointer to s */
    for ( t = 0; t <80; ++t){
        ch= getschar();
        switch (ch)
        {
        case '\n';
        s[t]='\n';/* terminate the string */
        return p;
        case '\n';
        if(t>0) t--;
            break;
        default:
        s[t]=ch;
        }
    }
    s[79]='\0';
    return p;
}