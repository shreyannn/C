#include <stdio.h>  // Display sum of two numbers using call by address or call by reference

int sum(int *a, int *b){
    return (*a + *b);        // *a -> value at address
}
int main(){
    int a=3,b=2;
    printf("the value of a is %d and b is %d.\n",a,b);
    printf("the sum of a and b is %d",sum(&a,&b));    // call by reference or call by address
    return 0;
}
//done