#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    printf("Enter any character \n");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z')
    {
        printf("Upper Case  \n");

    }
    else if(ch>='a' && ch<='z')
    {
        printf("Lower Case  \n");

    }
    else
    {
        printf("Invalid character");    
    }

    return 0;
}