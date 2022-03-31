#include <stdio.h>   // average of first n natural number using array
    int main(){
        float num,sum=0;
        printf("enter any number: ");
        scanf("%f",&num);
        for(int i=1;i<=num;i++){
            sum+=i;
        }
        printf("the average of first n natural number is %.2f.",sum/num);
    return 0;
}
//done