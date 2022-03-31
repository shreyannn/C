#include <stdio.h>
//nested if
// if inside if
int main(){
    int num1=100,num2=100;
    if(num1>=num2){
        if(num1==num2){
           printf("numbers are equal");
        }
        else{
            printf("num1 is greater than num2");
        }
    }
    if(num2>num1){
        printf("num2 is greater than num1");
    }
    return 0;
}