#include <stdio.h>  /*   WAP to display following patterns:
                         *
                         **
                         ***
                         ****
                         *****                          */

int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}