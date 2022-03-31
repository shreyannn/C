#include <stdio.h>    //WAP that asks an integer number n and print the sum of natural numbers from 1 to n.

int main(){
    int n,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       sum+=i; 
    }   
    printf("the sum of natural number from 1 to %d is %d",n,sum);
    return 0;
} 
//done