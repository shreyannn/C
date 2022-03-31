#include <stdio.h>

int main(){
    int a=100;
    //initialization of pointers
    int* ptr1;
    int** ptr2;    // pointer to pointer
    
    //assaigning address of a to ptr1
    ptr1=&a;   
    //assaigning address of ptr1 to ptr2   (pointer to pointer)
    ptr2=&ptr1;

    printf("value at a is %d",a);
    printf("value at *ptr1 is %d",*ptr1);     //value at address
    printf("value at **ptr2 is %d",**ptr2);      

    return 0;
}