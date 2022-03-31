#include <stdio.h> //Write a function that reads a float and integer number as arguments and return their product.

int product(int a, float b){
    return a*b;                       // return (float) a*b;
}
int main(){
    int a=2;
    float b=2.5, c;
    c= product(a,b);
    printf("%.2f",c);
    return 0;
}
//done