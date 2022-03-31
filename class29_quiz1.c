#include <stdio.h>    // how to find whether a number is prime or not.

int main(){
    int num, prime;
    printf("enter a number :");
    scanf("%d",&num);

    for(int i=2; i<num; i++){
        if(num%i==0){
            prime=1;
            break;
        }
    }
    if(prime==1){
        printf("it is not prime number.");
    }
    else{
        printf("it is prime number.");
    }

    return 0;
}