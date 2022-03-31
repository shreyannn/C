#include <stdio.h>   //WAP to read n float numbers from users and store them in array and find their average.

int main(){
    int n, i;
    float arr[10],sum=0,average;
    printf("enter any number: ");
    scanf("%d",&n);
    for( i=0;i<n;i++){
        printf("enter number %d :",i+1);
        scanf("%f",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    average =sum/n;
    printf("the average is : %.3f",average);
    return 0;
}
//done