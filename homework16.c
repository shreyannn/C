#include <stdio.h>  //   WAP that reads a number N and generates following sequence. 
//                       If N = 5, series is: 5 4 3 2 1 0 1 2 3 4 5

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);   
    for(int i=n;i>=0;i--){
        printf("%d  ",i);
        if(i==0){
            for(int i=1;i<=n;i++){
            printf("%d  ",i);
            }
        }
    } 
    return 0;
}