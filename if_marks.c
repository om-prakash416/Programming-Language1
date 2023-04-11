#include<stdio.h>
int main(){
    int n;
    printf("enter percentage : ");
    scanf("%d",&n);
    //more than 80->A
    //more than 60->B
   //more than 40->C
      //more than 40->D
      if(n>80){
        printf("A grade\n");
      }
      if (n>60){
        printf("B grade\n");
      }
    if (n>40){
        printf("C grade\n");
    }
    if(n<=40){
    printf("D grade\n");
    }
    return 0;
}