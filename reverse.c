#include <stdio.h>

int main()

{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);

    
    for( int i = 10; i >= 1; i-- )

    {   
        
        printf("%d ", n*i);

    }
    return 0;
}