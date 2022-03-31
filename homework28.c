#include <stdio.h>   // Write a recursive function which accepts an integer and return its factorial.

int factorial (int n){
    if(n==1){
        return 1;                 // ending point
    }
    if(n!=1){
        return n * factorial (n-1); }         // recursive point 
}
int main(){
    int n, fac;
    printf("enter any number: ");
    scanf("%d",&n);
    fac = factorial(n);
    printf("the factorial of %d is %d.",n,fac);
    return 0;
}
//done