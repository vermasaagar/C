#include <stdio.h>

void storeTables(int arr[][10], int n, int m,  int number);

int main()
{
   int tables[2][10];
   storeTables(tables,0,10,2);
   storeTables(tables,1,10,3);

   for(int i=0; i<10; i++)
   {
   

   printf("%d ", tables[0][i]);
}

printf("\n");

for(int i=0; i<10; i++)
{

   
   printf("%d ", tables[1][i]);


}

  
   
    printf("\n");
    return 0;

}

void  storeTables(int arr[][10], int n, int m, int number)
{
    for(int i = 0; i < m ; i++)
    {
        arr[n][i] = number*(i+1);
    }
}