#include <stdio.h>




void function(int a[2][2], int b[2][2]){
    
    printf("the sum of first and second matrix is : \n");
    for (int i=0 ; i<2; i++){ 
        for(int j=0 ; j<2 ; j++){
            printf("%d\t",a[i][j] + b[i][j]);
        }
        printf("\n");
    }

}
int main(){
    int a[2][2], b[2][2], sum[2][2];

    printf("enter first 2x2 matrix : ");
    for (int i=0 ; i<2; i++){
        for(int j=0 ; j<2 ; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter second 2x2 matrix : ");
    for (int i=0 ; i<2; i++){ 
        for(int j=0 ; j<2 ; j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("first matrix is :\n");
    for (int i=0 ; i<2; i++){ 
        for(int j=0 ; j<2 ; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("second matrix is :\n");
    for (int i=0 ; i<2; i++){ 
        for(int j=0 ; j<2 ; j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    function(a,b);
    
    return 0;
}