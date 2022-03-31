#include <stdio.h>  //    WAP to resize the string “Hello World” with new string “Hello Prime college students” 
#include <stdlib.h>      //   using dynamic memory allocation
#include <string.h>

int main(){
    char *ptr,*ptr2;
    printf("enter the string : ");
        gets(ptr);
    int m =strlen(ptr);
    // printf("%d",m);
    ptr2 = (char *) malloc( (m+1) * sizeof(char) );
    if(ptr2==NULL){
        printf("the dynamic memory has not been allocated.");
    }
    else{ 
        printf("enter the string : ");
        gets(ptr2);
    }
        printf("the given string is : ");
        puts(ptr2);
    


    // printf("after reallocation of the same memory space.\n");
    // printf("enter the number of elements: ");
    // scanf("%d",&n);
    // ptr= (int *) realloc (ptr, n * sizeof(int));
    // if(ptr==NULL){
    //     printf("the dynamic memory has not been allocated.");
    // }
    // else{
    //     for(i=0;i<n;i++){
    //     printf("enter the value of element %d: ",i+1);
    //     scanf("%d",&ptr[i]);
    //     }
    // }
    // for(i=0;i<n;i++){
    //     printf("the value of element %d : %d\n",i+1,ptr[i]);
    // }
    return 0;
}