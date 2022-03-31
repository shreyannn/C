#include <stdio.h>   //WAP to reverse the digits of a number.

void reversing(int n){
    int r;
    while(n!=0){                
    r= n%10;                   // takes last digit
    n= n/10;                   // removes the last digit from the num.
    printf("%d",r);
    }
}

int main(){
    int n;
    printf("enter any number : ");
    scanf("%d",&n);
    reversing(n);
    return 0;
}

//done