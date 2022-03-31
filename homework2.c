#include <stdio.h>  // WAP that asks user for radius of circle and calculates area and circumference of a circle.

int main(){
    float radius, area, perimeter;
    printf("enter the radius of the circle: ");
    scanf("%f",&radius);
    area= (float)22/7*radius*radius;                               // necessary to typecast.
    perimeter=(float)2* 22/7 * radius;                               
    printf("the area of the circle is %f.\n",area);
    printf("the perimeter of the circle is %f.",perimeter);
    return 0;
}
//done