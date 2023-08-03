#include<stdio.h>
#include<string.h>

struct student {
    
    int roll;
    float cgpa;
    char name[100];

};

void printInfo(struct student s1);

int main()
{
    struct student s1 = {123, 9.2, "Sagar"};
    

    printInfo(s1);
    s1.roll = 100;
    printf("Roll = %d\n", s1.roll);

    

    return 0;
}

void printInfo(struct student s1)
{
   printf("Roll: %d\n", s1.roll);
   printf("CGPA: %f\n", s1.cgpa);
   printf("Name: %s\n", s1.name);
}