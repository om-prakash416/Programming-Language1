#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    int r;
    printf("enter r ");
    scanf("%d", &r);
    int nfact = 1;               // n!
    int rfact = 1;               // r!
    int nrfact = 1;              // n-r!
    for (int i = 2; i <= n; i++) // n!
    {
        nfact = nfact * 1;
    }
   
    // int ncr = nfact / (rfact * nrfact);
    // printf("%d", ncr);
    // return 0;
    int a = factorial(n);
    printf("%d",a);
    return 0;
}