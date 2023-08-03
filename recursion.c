/* #include <stdio.h>


void printHW(int count);
int main()

{

    printHW(5);
    return 0;
}

void printHW(int count)
{

    if(count == 0)
    {

        return;

    }
    printf("Hello World!\n");
    printHW(count - 1);

   

}

*/

#include<stdio.h>

int sum(int n);

int main()
{ 
    printf("sum is %d ", sum(5));
    return 0;

}

int sum(int n)
{
    if(n == 1)
    {
        return 1;
    }

    int sumN1 = sum(n-1);

    int sumN = sumN1 + n;
    return sumN;
}