#include<stdio.h>
void swap(int *x,int *y);
// call by reference
int main(void)
{
    int i,j;
    i=10;
    j=20;
    printf("i and j before swapping:%d %d\n",i,j);
    swap(&i,&j);/*pass the address of i and j */
    printf("i and j after swapping:%d %d\n",i,j);
    return 0;
}
void swap(int *x,int *y )
{
    int temp;
    temp=*x;
    *x=*y;
    *y= temp;

}