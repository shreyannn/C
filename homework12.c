#include <stdio.h>  // WAP that asks user for a number and then display only even numbers from 2 to n.


int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2){
        printf("%d\n",i);
    }
    return 0;
}
//done