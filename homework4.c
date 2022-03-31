#include <stdio.h>    // WAP to read three sides of a triangle and calculate area
#include <math.h>

int main(){
    float a,b,c,semi,ar,area;
    printf("enter three sides of a triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    semi= (a+b+c)/2;
    ar = semi*(semi-a)*(semi-b)*(semi-c);           // heron's formula
    area = (float)pow(ar,0.5);
    printf("the area of the triangle is %f.\n",area);

    return 0;
}
//done