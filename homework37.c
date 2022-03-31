#include <stdio.h>   // WAP to ask two m*n matrixes and display both the sum and difference of two matrices.

int main(){
    int m,n,i,j,x,y; 
    printf("enter number of rows: ");
    scanf("%d",&m);
    printf("enter number of colomns: ");
    scanf("%d",&n);
    int arr1[m][n], arr2[m][n];
    printf("\n\n**FIRST MATRIX**\n");
    for(i=0; i<m; i++){
        printf("\n");
        for(j=0; j<n; j++){
        printf("a[%d][%d] is :",i+1,j+1);
        scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n\n**SECOND MATRIX**\n");
    for(i=0; i<m; i++){
        printf("\n");
        for(j=0; j<n; j++){
        printf("a[%d][%d] is :",i+1,j+1);
        scanf("%d",&arr2[i][j]);
        }
    }
    printf("\n\n**SUM**\n");
    for(i=0; i<m; i++){
        printf("\n");
        for(j=0; j<n; j++){
        printf("%d\t",arr1[i][j]+arr2[i][j]);
        }
    }
    printf("\n\n**DIFFERENCE**\n");
    for(i=0; i<m; i++){
        printf("\n");
        for(j=0; j<n; j++){
        printf("%d\t",arr1[i][j]-arr2[i][j]);
        }
    }

    return 0;
}
//done