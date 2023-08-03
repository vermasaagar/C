#include<stdio.h>
#include<string.h>

void checkCharacter(char str[], char ch);
int main()

{ 
    char str[] = "sagarverma";
    char ch = 'a';

    checkCharacter(str, ch);

}

void checkCharacter(char str[], char ch)
{

    for(int i = 0; str[i] != '\0'; i++)
    {
      if(str[i] == ch)
      {
        printf("character is present ");
        return;
      }
     
    }
    printf("character is not present ");

}