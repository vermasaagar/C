#include<stdio.h>

int sum();

int main()
{   
    int a,b;
    printf("Enter the value of a \n ");
    scanf("%d", &a);
    printf("Enter the value of b \n ");
    scanf("%d", &b);

    int s = sum(a, b);

    printf("sum is : %d\n", s);

    return 0;


}

int sum(int x, int y)
{
  
  return x + y ;

}