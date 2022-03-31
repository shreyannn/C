#include <stdio.h>

int main(){
   
    // pointer variable declaration
    // int* ptr;
    // int * ptr;
    // int * ptr;
    // int* ptr1,ptr2,ptr3;
    // float* ptr1;
    // char* ptr2;
    int num=100;
    int* ptr=&num;         //*ptr=address of num.
    // int num=100, *ptr=&num;  
    printf("address is %d\n",ptr);
    num=200;
    printf("value is %d",*ptr);    // value at address.
    return 0;
}