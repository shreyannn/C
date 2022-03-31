#include <stdio.h>//WAP to that asks for n numbers from users and store them in array and find maximum and minimum number of them.

int main(){
    int n, i, arr[10], max, min;
    printf("enter any number: ");
    scanf("%d",&n);
    for( i=0;i<n;i++){
        printf("enter number %d :",i+1);
        scanf("%d",&arr[i]);
    }


    max = arr[0];       // suppose number 1 is maximum and minimum.
    min = arr[0];
    for( i=1;i<n;i++){
        if(max<arr[i]){                 // if number 1 is < than number 2
            max= arr[i];                // then max = number 2             ...keep continuing the loop.
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("the maximum number is : %d\n",max);
    printf("the minimum number is : %d",min);
    return 0;
}
//done