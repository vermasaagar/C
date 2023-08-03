#include<stdio.h>
#include<string.h>

typedef struct student {

    int roll;
    float cgpa;
    char name[100];

} stu;

int main()
{
    stu s1;
    s1.roll =123;
    s1.cgpa =9.2;
    
    strcpy(s1.name, "Sagar");

    printf("Name : %s\n", s1.name);




}   