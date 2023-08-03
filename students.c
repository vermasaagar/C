#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    int roll;
    float cgpa;

    printf("Enter Name:\n");
    scanf("%s",&name);

    printf("Enter Roll_no:\n");
    scanf("%d",&roll);

    printf("Enter CGPA:\n");
    scanf("%f",&cgpa);

    fprintf(fptr,"%s\n",name);
    fprintf(fptr,"%d\n",roll);
    fprintf(fptr,"%f\n",cgpa);


    return 0;
}


