#include<stdio.h>

float percentage(float hindi, float eng, float mathematics);

int main()

{
 float hindi =95;
 float eng =97;
 float Mathematics =100;

 printf("percentage: %f\n",percentage(hindi, eng, Mathematics));   
 return 0;
}

float percentage(float hindi, float eng, float Mathematics)
{
  float percentage = (hindi + eng + Mathematics)/3;
  return percentage; 
}
