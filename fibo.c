#include<stdio.h>


int fibo(int n);

int main()

{   
    printf(" fibonnacci is : %d \n", fibo(6));
    return 0;
}

int fibo(int n)
{
   if(n==0)
   {
    return 0;
   }
   if(n==1)
   {
    return 1;
   }


    int fibo1 = fibo(n-1);
    int fibo2 = fibo(n-2);
    int fiboN = fibo1 + fibo2;
    return fiboN;
}