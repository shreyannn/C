#include <stdio.h>   // WAP to compute the sum of digits of a given integer number.

int main(){   
    int n, t, remainder, sum=0;         
    printf("enter any number :");
    scanf("%d", &n); 
    t=n;                         // while using printf in last step, we need n.
    while(t!=0){
        remainder = t%10;        // last digit of a num.
        sum += remainder;
        t = t/10;      // t/=10 ;         last digit removed for next step
    }
    printf("the sum of digits of %d is %d.",n,sum);
    

    return 0;
}
//done