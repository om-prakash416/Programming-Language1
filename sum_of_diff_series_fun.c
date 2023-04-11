#include<stdio.h>
#include<math.h>
int fact(int);
int main(){
    int n,i,NUM,DENO;
    float sum=0;
    printf("\n ");
    scanf("%d",&n);
    for ( i =1; i <=n; i++)
    {
        NUM=(i,i);
        DENO=fact(i);
        sum+=(float)NUM/DENO;
    }
    printf("\n 1/1!+4/2!+27/3!+...=%f",sum);
    return 0;
}
int fact(int n){
    int  f=1,i;
    for(i=1;i>=1;i--)
    f=f*i;
    return f;
}