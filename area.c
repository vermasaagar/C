#include <stdio.h>
#include <math.h>

float rectangle(float  a, float b);
float square(float side);
float circle(float rad);

int main()
{
    float a =5.0;
    float b =10.0;

    printf("area of rectangle is : %f  \n", rectangle(a,b));

    float side =4.0;

    printf("area of square is : %f \n", square(side));

    float rad =3.0;
    printf("area of circle is : %f \n", circle(rad));




    return 0;




}
float rectangle(float a, float b)
{
   return a * b;
}

float square(float side)
{
    return side * side;

}

float circle(float rad)
{  
    
    return 3.14 * rad * rad;
}