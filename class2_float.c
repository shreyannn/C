#include <stdio.h>

int main(){
    float a=2,b=7;
    float _1=(b/a);
    float _2= a*b;
    float _3 = a+b;
    float _4= a-b;
    printf("b divide by a is %.3f\n",_1);
    printf("product of a and b is %.3f\n",_2);   //after decimal point only three digit.
    printf("sum of a and b is %.3f\n",_3);
    printf("subtracting a by b is %.3f\n",_4);

    return 0;
}