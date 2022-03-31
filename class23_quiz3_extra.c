#include <stdio.h>

int main(){
    int a[2][2], b[2][2],i,j;                    // yesma initialize garyo ki aru loop haru ma ni use garna milxa.

    printf("enter first 2x2 matrix : ");
    for ( i=0 ; i<2; i++){
        for( j=0 ; j<2 ; j++){
            scanf("%d",&a[i][j]);
        }
    }

    // printf("enter second 2x2 matrix : ");
    // for ( int i=0 ; i<2; i++){                 // for ko bhitra i lai initialize garyo ki tyo loop bhitra matra i define hunxa
    //     for(int j=0 ; j<2 ; j++){
    //         scanf("%d",&b[i][j]);
    //     }
    // }

    printf("first matrix is :\n");
    for (i=0 ; i<2; i++){ 
        for( j=0 ; j<2 ; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}