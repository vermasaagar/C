#include<iostream>

using namespace std;



int main()
{
   int arr[7] = { 0, 1, 1, 0, 0, 1, 1 };
   int count = 0;
  
   for(int i = 0; i < 7; i++)
   {
        if(arr[i] == 0)
        {
            count++;
        }

   }

 cout << "total number of 0's in this array :"<< count << endl; 
   
 return 0;
}
  
   
   