#include<stdio.h>
int main(){
    int i,j,k;
    printf("input the number of rows:");
    scanf("%d", &k);
    for (i = k; i >= 1;i--){
        for (j = 1; j <= i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
