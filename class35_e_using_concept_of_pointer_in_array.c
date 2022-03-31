#include <stdio.h>   // using the concept of pointer we are accessing array (we arenot actually using pointer)

int main(){
    int i, arr[3], sum=0; 

    printf("enter any three integers:");
    for(i=0;i<3;i++){
        scanf("%d",arr+i);    // arr = &arr[0]               diff
        sum+=*(arr+i);      //value at address

    //  scanf("%d",&arr[i]);
    //  sum+=arr[i];

    } 
    
    printf("sum is %d",sum);
    return 0;
}