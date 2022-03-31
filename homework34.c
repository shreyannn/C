#include <stdio.h>  //WAP to read n numbers from user and store in array. Add even numbers and
//odd numbers separately and display the result using function

int main(){
    int n, i, arr[10], sumeven=0, sumodd=0;
    printf("enter any number: ");
    scanf("%d",&n);
    for( i=0;i<n;i++){
        printf("enter number %d :",i+1);
        scanf("%d",&arr[i]);
    }
    for( i=0;i<n;i++){
        if(arr[i]%2==0){                   // for even.  
            sumeven += arr[i]; 
        }
        if(arr[i]%2!=0){                   // for odd.
            sumodd += arr[i];
        }
    }
    printf("the sum of even numbers is %d.\n",sumeven);
    printf("the sum of odd numbers is %d.\n",sumodd);

    return 0;
}
//done