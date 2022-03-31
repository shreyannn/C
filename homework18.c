#include <stdio.h>   // WAP to count number of digits in a number.

int main(){
    long long n;     // int cant store number greater than 10 digits 
    int count=0;
    printf("enter any number :");
    scanf("%lld", &n);     // this will also be diff

    // iterate until n becomes 0
    // remove last digit from n in each iteration
    // increase count by 1 in each iteration

    while(n!=0){
        n/=10;                 //  int / int = int.  fractionn part will not be count.
        ++count;
    }
    printf("the number of digits are : %d.",count);
    return 0;
}