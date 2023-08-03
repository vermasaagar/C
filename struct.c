#include<stdio.h>
#include<string.h>

struct student {

    int roll;
    float cgpa;
    char name[100];
};


int main()
{
    struct student s1;
    //s1.name[] ="Sagar";
    strcpy(s1.name, "Sagar");
    s1.roll = 212;
    s1.cgpa = 9.2;

    printf("Name : %s\n", s1.name);
    printf("Roll_No : %d\n", s1.roll);
    printf("Cgpa : %f\n", s1.cgpa);

    struct student s2;
    //s2.name = "Vivek":
    strcpy(s2.name, "Vivek");
    s2.roll = 123;
    s2.cgpa = 8.8;

    printf("name : %s\n", s2.name);
    printf("Roll_No : %d\n", s2.roll);
    printf("Cgpa : %f\n", s2.cgpa);

    struct student s3;
    //s2.name = "Vivek":
    strcpy(s3.name, "Rahul");
    s3.roll = 126;
    s3.cgpa = 8.9;

    printf("name : %s\n", s3.name);
    printf("Roll_No : %d\n", s3.roll);
    printf("Cgpa : %f\n", s3.cgpa);


    return 0;
}