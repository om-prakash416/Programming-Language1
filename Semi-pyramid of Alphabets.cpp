#include<stdio.h>
int main(){
    int i,j;
    char last_al,alpha='A';-
    printf("Enter an uppercase character to be in the in the last row:");
    scanf("%c", &last_al);
    for (i = 1; i <= (last_al - 'A'+1);i++){
        for (j = 1; j <= i;j++){
            printf("%c",alpha);
        }
        ++alpha;
        printf("\n");
    }
    return 0;
}
