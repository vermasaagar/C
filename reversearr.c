#include<stdio.h>

void reverse(int arr[], int n);
int printNum(int arr[], int n);

int main()

{   
    int arr[] = {1,2,3,4,5,6};
    reverse(arr, 6);
    printNum(arr, 6);
    

    return 0;

}


int printNum(int arr[], int n)
{
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}


void reverse(int arr[], int n)
{
  for(int i = 0; i < n/2; i++)
  {
    int firstnum = arr[i];
    int secondnum = arr[n-i-1];
    arr[i] = secondnum;
    arr[n-i-1] = firstnum;



  }

}

