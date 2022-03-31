#include <stdio.h>   // WAP to read an integer from user and display the sum of even digits only.

int main(){
    int n, r, sum=0, t;
    printf("enter any number: ");
    scanf("%d",&n);
    t=n;
    while(n!=0){
        r = n%10;
        if(r%2==0){         // to add only even digits.     so we use the condition of being even.
        sum+=r;
        }
        n= n/10;
    }
    printf("the sum of the digits of %d is %d.",t,sum);
    return 0;
}
//done