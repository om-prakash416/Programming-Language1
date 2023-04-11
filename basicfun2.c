#include<stdio.h>
void england(){
    printf("you are in england\n");//6
    return;//7
}
void australia(){
    printf("you are in australia\n");// 4
    england();//calling 5
    return;//8
}
void india(){
    printf("you are in india\n");//2
    australia();// calling australia 3
    return; //9
}
int main(){
    india();// callling INDIA //1
    return 0;
}