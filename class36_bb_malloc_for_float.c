#include <stdio.h>
#include <stdlib.h>  


int main(){
    float *ptr;
    int i, n;
    printf("enter number of elements : ");
    scanf("%d",&n);
    
    ptr = (float*) malloc( n * sizeof(int));      
    printf("value is %d\n",*ptr);       

    if(ptr==NULL){
        printf("Memory is not allocated.\n");     
        return 0;
    }
    else{
        for(i=0; i<n; i++){
        printf("enter the value for element %d :",i+1);
        scanf("%f",&ptr[i]);
        }
    }
    printf("the required values are: \n");
    for(i=0;i<n;i++){
        printf("\t\t\t%f\n",ptr[i]);
    }

    free(ptr);  
    return 0;
}