#include<stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("Sum.txt", "r");

    int a;
    fscanf(fptr, "%d\n", &a);
    int b;
    fscanf(fptr, "%d\n", &b);

    fclose(fptr);
    fptr = fopen("Sum.txt", "w");

    fprintf(fptr, "%d\n", a+b);

    fclose(fptr);
    return 0;
}