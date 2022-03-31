#include <stdio.h>   //WAP to read a matrix of order m*n from user. Pass this matrix to function
// and multiply each element of the matrix by 3.

void multiply (int m, int n, int* arr){
    for(int i=0; i<m; i++){
        printf("\n");
        for(int j=0; j<n; j++){
            for(int a=0; a<m*n; a++){         // for incresing pointer by 1 int in each step.
            printf("%d\t",*(arr+a) );          // value at address.
            }
        }
    }
}

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
    multiply( m, n, arr);     // &a[0][0]
    return 0;
}
