#include <stdio.h>
#include <stdlib.h>


int main(){
    int *ptr;
    int n , i;
    printf("enter number of elements : ");
    scanf("%d",&n);
    
    ptr = (int*) malloc( n * sizeof(int));       
    printf("default value is %d (garbage for malloc)\n",*ptr);          
       if(ptr==NULL){
        printf("Memory is not allocated.\n");      
        return 0;
    }
    else{
        for(i=0; i<n; i++){
        printf("enter the value for element %d :",i+1);
        scanf("%d",&ptr[i]);   //  scanf("%d",ptr+i);
        }
    }
    printf("the required values are: \n");
    for(i=0;i<n;i++){
        printf("\t\t\t%d\n",ptr[i]);   // *(ptr+i);
    }

    n=10;
    ptr=(int*) realloc(ptr,n*sizeof(int));     // realloc helped to reuse the same memory and save us from consuming more memory.
    if(ptr==NULL){
        printf("Memory is not allocated.\n");      
        return 0;
    }
    else{
        printf("%d",*ptr);
        for(i=0; i<n; i++){
        printf("enter the value for element %d :",i+1);
        scanf("%d",&ptr[i ]);  
        }
    }
    printf("the required values are: \n");
    for(i=0;i<n;i++){
        printf("\t\t\t%d\n",ptr[i]);
    }

    free(ptr);   
    return 0;
}