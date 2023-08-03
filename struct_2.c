#include<stdio.h>
#include<string.h>

struct student {


    int roll;
    float cgpa;
    char name[100];
};


int main()
{
    struct student s1 = {12, 9.2, "Sagar"};
    
    printf("student Details\n");
    printf("Roll_no: %d\n", s1.roll);

    struct student *ptr = &s1;
    printf("Student->Roll_no: %d\n", (*ptr).roll);

   
    printf("Student->cgpath: %f\n", ptr->cgpa);
     printf("Student->Name: %s\n", ptr->name);

    


   

    return 0;
}