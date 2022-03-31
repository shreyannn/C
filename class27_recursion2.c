#include <stdio.h>    // finding factorial using recursion

int factorial(int number){
    if(number==1){       // terminating condition.
        return 1;
    }
    else{
        return number * factorial(number-1);
    }
}
int main(){
    int num;
    printf("enter a number whose factorial you desire : ");
    scanf("%d",&num);
    printf("%d",factorial(num));
    return 0;
}