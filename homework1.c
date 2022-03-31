#include <stdio.h>  // WAP that converts temperature in Centigrade into Fahrenheit.

int main(){
    float celsius,fahrenheit;
    printf("enter the temperature in celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius * 9/5) + 32;
    printf("the required temperature in fahrenheit is %f.",fahrenheit);
    return 0;
}
//done