#include <stdio.h>  //WAP to allocate space for array of integer using malloc(), calloc() and free methods
#include <stdlib.h>

int main(){
    printf("using malloc()\n");
    int *ptr;
    int n,i;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    ptr = (int *) malloc ( n * sizeof(int) );    // arr[n];
    for(i=0;i<n;i++){
        printf("enter the element %d : ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++){
        printf("the value of element %d :  %d\n",i+1,ptr[i]);
    }
    free(ptr);                                                                 // free

    // printf("using calloc()\n");
    // int *ptr;
    // int n,i;
    // printf("enter the number of elements: ");
    // scanf("%d",&n);
    // ptr = (int *) calloc ( n , sizeof(int) );    // arr[n];
    // for(i=0;i<n;i++){
    //     printf("enter the element %d : ",i+1);
    //     scanf("%d",&ptr[i]);
    // }
    // for(i=0;i<n;i++){
    //     printf("the value of element %d :  %d\n",i+1,ptr[i]);
    // }
    // free(ptr);

    
    return 0;
}
//done