#include<stdio.h>
int main(){
    int i,j,k;
    printf("input the number of rows:");
    scanf("%d", &k);
    for (i = 1; i <= k;i++){
        for (j = 1; j <= i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
