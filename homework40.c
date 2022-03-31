#include <stdio.h>  //    WAP to resize the string “Hello World” with new string “Hello Prime college students” 
#include <stdlib.h>           //   using dynamic memory allocation

int main(){
    int *ptr;
    int n,i;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    ptr = (int *) malloc( n * sizeof(int) );
    if(ptr==NULL){
        printf("the dynamic memory has not been allocated.");
    }
    else{
        for(i=0;i<n;i++){
        printf("enter the value of element %d: ",i+1);
        scanf("%d",&ptr[i]);
        }
    }
    for(i=0;i<n;i++){
        printf("the value of element %d : %d\n",i+1,ptr[i]);
    }


    printf("after reallocation of the same memory space.\n");
    printf("enter the number of elements: ");
    scanf("%d",&n);
    ptr= (int *) realloc (ptr, n * sizeof(int));
    if(ptr==NULL){
        printf("the dynamic memory has not been allocated.");
    }
    else{
        for(i=0;i<n;i++){
        printf("enter the value of element %d: ",i+1);
        scanf("%d",&ptr[i]);
        }
    }
    for(i=0;i<n;i++){
        printf("the value of element %d : %d\n",i+1,ptr[i]);
    }
    return 0;
}