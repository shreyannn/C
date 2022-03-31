#include <stdio.h>

int main(){
    int arr[24]={11,22,33,44,55},sum=0;

    for(int i=0; i<5;i++){
        printf("%d\n",arr[i]);
    }

     for(int i=0; i<5;i++){
        sum+=arr[i];
    }
    printf("\n%d\n",sum);
    printf("average is %f\n",(float)sum/5);
    return 0;
}