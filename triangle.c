#include <stdio.h>
int main ()
{
    float x,y,area_of_the_triangle;
    printf("Input height of triangle: ");
    scanf("%f",&x);
    printf("Input base of triangle: ");
    scanf("%f",&y);
    area_of_the_triangle = (x*y)/2;
    printf("The area of the triangle is %f\n",area_of_the_triangle);
    return 0;

}
    