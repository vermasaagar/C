#include<stdio.h>



int main()
{



FILE *fptr;

fptr = fopen("odd.txt", "w");

int n;

printf("Enter n \n");
scanf("%d", &n);

for(int i =1; i < n; i++)
{
    if(i % 2 != 0)
    {
        fprintf(fptr,"%d\n ",i);
    }
}





return 0;
}