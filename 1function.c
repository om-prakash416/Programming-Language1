#include<stdio.h>
void printline(void);
int main(){
    printline();
    printf("this illustration the use of c function\n");
    printline();
}
void printline(void)
{
    int i;
    for(i=1;i<40;i++)
    printf("_");
    printf("\n");

}