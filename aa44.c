#include <stdio.h>      // factorial using funciton.
int factorial (int a){
    if(a==1){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}
    int main(){
        int num,fac;
        printf("enter any number: ");
        scanf("%d",&num);
        fac=factorial(num);
        printf("the value of factorial is %d.",fac);
    return 0;
}
//done