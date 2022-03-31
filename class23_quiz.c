#include <stdio.h>

int main(){
     int a[3][4];

    for(int i=0;i<3;i++){     
        for(int j=0;j<4; j++){      
              printf("enter the value of a[%d][%d] :",i,j);
              scanf("%d",&a[i][j]);     
        }
    }

    for(int i=0;i<3;i++){      //row
        printf("\n");
        for(int j=0;j<4; j++){       //column
            printf("%d\t",a[i][j]);       //  \t gives horizontal tab.
        }
    }
    return 0;
}