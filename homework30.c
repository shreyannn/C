#include <stdio.h>  //  WAP to read a number n from user and calculate sum of first n natural
//  numbers using recursive function

int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return n + sum(n-1);
    }
} 

int main(){
    int n, s=0;
    printf("enter any number: ");
    scanf("%d",&n);
    s=sum(n);
    printf("the sum of first %d natural number is %d.",n,s);
    return 0;
}
//done