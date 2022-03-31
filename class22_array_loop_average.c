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
    printf("average is %f\n",(float)sum/5);     // integer/integer = must be integer ...if it is decimal then we need to typecast it. (float)
    return 0;
}