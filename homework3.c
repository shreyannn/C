#include <stdio.h>  //WAP that asks three coefficients of a quadratic equation and calculates its root.
#include <math.h>

int main(){
    int a,b,c;
    float x;
    printf("enter the coefficient of x square : ");
    scanf("%d",&a);
    printf("enter the coefficient of x :");
    scanf("%d",&b);
    printf("enter the constant :");
    scanf("%d",&c);
    
    a*pow(x,2)+b*x+c==0;
    printf("%f",x);
    return 0;
}