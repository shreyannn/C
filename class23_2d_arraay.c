#include <stdio.h>

/* 2D array:
int a[3][4] --> 3 is row, 4 is column
        col1    col2    col3    col4
row1    100     100     100     100
row2    100     100     100     100
row3    100     100     100     100


          col1       col2       col3       col4
row1    a[0][0]    a[0][1]    a[0][2]    a[0][3]
row2    a[1][0]    a[1][1]    a[1][2]    a[1][3]
row3    a[2][0]    a[2][1]    a[2][2]    a[2][3]  


multi dimensional array initialization:
Total elements = rows* columns
int a[3][4] = {1, 2, 3, 4, 5,6,7,8, 9, 10, 11, 12};
int a[3][4] = {(1, 2, 3, 4), (5,6,7,8), (9, 10,11,12));

*/

int main(){
    int a[3][4] = {1, 2, 3, 4, 5,6,7,8, 9, 10, 11, 12};
    // int a[3][4] = {1, 2, 3, 4, 5,6 };     //array ko default value 0.

    // printf("%d\n",a[2][2]);

    for(int i=0;i<3;i++){      //row
        printf("\n");
        for(int j=0;j<4; j++){       //column
            printf("%d\t",a[i][j]);       //  \t gives horizontal tab.
        }
    }

    return 0;
}