#include<stdio.h>

void max(int *a, int *b);

int main()
{
int a=12;
int b=15;

max(&a, &b);
printf("a: %d, b: %d\n", a,b);



return 0;
}

void max(int *a, int *b)
{

    if(*a > *b)
    {
       printf("greater value is : %d\n",*a);


    }
    else 
    {
       printf("greater value is : %d\n",*b);
    }


}