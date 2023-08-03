/*#include <stdio.h>

int main()
{

  
int age = 22;

int *ptr =&age;
int newptr= *ptr;

printf("Age: %d\n", newptr);


    return 0;
}


*/

#include <stdio.h>
int main()
{

    int x;
    int *ptr;

    ptr =&x;
    *ptr = 0;

    printf("x: %d\n",x);
    printf("*ptr: %d\n",*ptr);
    
    *ptr +=5; // *ptr = *ptr + 5;
    printf("x: %d\n",x);
    printf("*ptr: %d\n",*ptr);

    (*ptr)++; // *ptr = *ptr+1;
    printf("x: %d\n",x);
    printf("*ptr: %d\n",*ptr);

    return 0;
    
    


}
