#include <stdio.h>

int main(){
    int arr[]={100,200,300};
    int i, *ptr;
    ptr=arr;   //ptr=&arr[0];
    printf("%d\n",ptr);
    for(i=0;i<3;i++){
        printf("address of arr[%d] = %d\n",i,ptr);;
        printf("value at arr[%d] = %d\n",i,*ptr);
        ptr++;
    }
    if(&arr[1]<&arr[2]){
        printf("address of arr[1] is less than address of arr[2].\n");
    }
    // ptr=&arr[2];   
    // printf("%d\n",ptr);
    // for(i=0;i<3;i++){
    //     printf("address of arr[%d] = %d\n",i,ptr);;
    //     printf("value at arr[%d] = %d\n",i,*ptr);
    //     ptr--;
    // }
    return 0;
}