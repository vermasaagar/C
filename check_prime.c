#include <stdio.h>

int main()


{
   int n;

   printf("enter a number\n");
   scanf("%d", &n);


   for(int i=1; i<=n; i++)
   {

   if(n / 2 != 0)
   
   {
    printf("prime Number :  %d\n",n);
   }
   else
   {
    printf("Not Prime : %d\n", n);
   }

   return 0;


   }

   







    return 0;
}