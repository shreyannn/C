#include <stdio.h>

int main(){
    int value[3]={100,200,300};
    int i, *a[3];    // array pointer (pointer of array)

    for(i=0;i<=2;i++){
        a[i]=&value[i];
        printf("value of value[%d] is %d\n",i,*a[i]);       // value at address
    }

    //  for(i=0;i<=2;i++){
    //     printf("value of value[%d]is %d\n",i,*a[i]);
    //  }


    return 0;
}