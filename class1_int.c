#include <stdio.h>

int main(){
    int a=3,b=6,c=5;
    int sum2,product, sum3;
    int divide;
    sum2 = a+b;
    product= a*b;
    divide=(b/a);
    sum3=a+b+c;

    printf("sum of %d and %d is %d\n",a,b,sum2);
    printf("product of %d and %d is %d\n",a,b,product);
    printf("dividing %d by %d is %d\n",b,a,divide);
    printf("sum of %d and %d is %d\n",a,b,sum3);


    return 0;
}