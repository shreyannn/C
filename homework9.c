#include <stdio.h>    //WAP that asks an integer number n and print all the natural numbers from 1 to n.

int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}
//done
