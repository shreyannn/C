#include <stdio.h>   //WAP to calculate factorial of a number.

int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int num,result;
    printf("enter a number: ");
    scanf("%d",&num);
    result=factorial(num);
    printf("the factorial of %d is %d.\n",num,result);
    return 0;
}
//done
