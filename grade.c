#include<stdio.h>

int main()
{
    int marks;
    printf("enter marks of student \n");
    scanf("%d", &marks);


    if ( marks >=30)
    {
        printf("pass\n");

        if (marks >= 30 && marks <= 40)
         {
            printf("grade D \n");
         }
         else
         {
            printf("not in the range");
         }
        
    }
    else
    {
        printf("fail\n");
    }
    return 0;

}