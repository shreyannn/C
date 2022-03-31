#include <stdio.h>  //WAP to read order of matrix and its elements. Find transpose matrix of the matrix.

int main(){
    int m,n,i,j; 
    printf("enter number of rows: ");
    scanf("%d",&m);
    printf("enter number of colomns: ");
    scanf("%d",&n);
    int arr[m][n];
    for(i=0; i<m; i++){
        printf("\n");
        for(j=0; j<n; j++){
        printf("a[%d][%d] is :",i+1,j+1);
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0; i<m; i++){
        printf("\n");
        for(j=0; j<n; j++){
        printf("%d\t",arr[i][j]);
        }
    }
    printf("\n**for transpose matrix**\n");
    for(j=0; j<n; j++){                            // see in copy
        printf("\n");
        for(i=0; i<m; i++){
        printf("%d\t",arr[i][j]);
        }
    }

    return 0;
}
//done