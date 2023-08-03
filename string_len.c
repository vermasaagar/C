#include<stdio.h>
#include<string.h>



//strlen(str): count number of characters excluding '\0'
/*int main()
{
    char name[] = "sagar";
    
    int length = strlen(name);
    printf("length is : %d",length);

    



    return 0;

}
*/


// copies value of old string to new string

/*int main()
{

    char newStr[] = "sagar";
    char oldStr[] = "verma";
    strcpy(newStr,oldStr);
    puts(newStr);


    return 0;
}
*/

//strcat(firstStr, secondStr): concatenate firstStr with secondStr 


int main()
{
    char firstStr[]= "sagar";
    char secondStr[]= "verma";

    strcat(firstStr, secondStr);
    
    puts(firstStr);


    return 0;
}


