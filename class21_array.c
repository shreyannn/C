#include <stdio.h>

//Array Declaration: dataType arrayName[arraySize]

int main(){
    int arr[10]={1,2,3,4};
    
    printf("%d\n",arr[0]);    // index of array starts from 0.
    printf("%d\n",arr[9]);    //default value of integer is 0.

    int arrr[]={1,2,3};
    printf("%d\n",arrr[9]);     


    return 0;
}