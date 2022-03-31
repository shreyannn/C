#include <stdio.h>   //WAP to determine whether the number inputted by user is prime or not.

int main(){
    int n,prime;
    printf("enter any number: ");
    scanf("%d",&n);

    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=1;
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
//done