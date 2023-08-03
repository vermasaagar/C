#include<stdio.h>

int main()
{

    int n;
    printf("enter a number\n");
    scanf("%d", &n);

    int fac = 1;
    for (int i = 1; i <= n; i++) 
    {
        fac = fac * i;
    }

    printf("%d\n", fac);

    return 0;
    
}