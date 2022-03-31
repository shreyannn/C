#include <stdio.h>       // how to find whether a number is prime or not using function.

void prime (int num){
    int prime;
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
}

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    prime(num);
    return 0;
}