#include <stdio.h>      //write a program to demonstrate the usage of free() with malloc().
#include <stdlib.h>          // free() is used to conserve the memory by by deallocationg the memory.

int main(){
    int *ptr;
    int *ptr2;
    ptr=(int *) calloc(600 , sizeof(int));      // if we have written there space for 4 integer, we can store more integer. idk how???!!!   maybe it work but consume more memory.

        for(int i=0;i<600;i++){
        ptr2=(int *) calloc(600000 , sizeof(int));    // it is inside the loop. Each time the loop is run, it allocate the memory for 600000 
//                                                  integers. it will consume more memory if we dont de-allocate it at the end of the loop. ie- free() 
        printf("enter the decimal value of element %d:\n",i+1);
        scanf("%d",&ptr[i]);
        free(ptr2);     // it will free the memory block in each step.
    }
    for(int i=0;i<600;i++){
        printf("The decimal value of element %d is: %d\n",i+1,ptr[i]);
    }
    return 0;
} 