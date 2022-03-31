#include <stdio.h>
#include <stdlib.h>   // -> malloc calloc free realloc inside this headerfile


int main(){
    int *ptr;
    int n , i;
    printf("enter number of elements : ");
    scanf("%d",&n);
    
    ptr = (int*) malloc( n * sizeof(int));        // this works like an array ie. ptr[n]; but it is not possible to write in c.
    printf("value is %d\n",*ptr);           // default value is garbage


    if(ptr==NULL){
        printf("Memory is not allocated.\n");      // this happens only when there isnot enough space in the memory.
        return 0;
    }
    else{
        for(i=0; i<n; i++){
        printf("enter the value for element %d :",i+1);
        scanf("%d",&ptr[i]);
        }
    }
    printf("the required values are: \n");
    for(i=0;i<n;i++){
        printf("\t\t\t%d\n",ptr[i]);
    }

    free(ptr);   // this will erase the memory block pointed by the pointer.
    return 0;
}