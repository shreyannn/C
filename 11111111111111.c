#include<stdio.h>
int main()
{

    int row_size,col_size;
    //Get size of matrix
    printf("Enter the row Size Of the Matrix:");
    scanf("%d",&row_size);
    printf("Enter the columns Size Of the Matrix:");
    scanf("%d",&col_size);

    int matrix[5][5];

    //Taking input of the matrix
    int i,j;
    printf("Enter the Matrix Element:\n");
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    //check except Diagonal elements are 0 or not
    int point=0;
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
        if(i==j && matrix[i][j]==0)
        {
            point++;
            break;
        }
        }
    }
    if(point==row_size)
        printf("Given Matrix is diagonally zero Matrix.");
    else
        printf("Given Matrix is a not");
}