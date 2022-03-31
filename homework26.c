#include <stdio.h>  // 1                           always start with line then space then star/number
//                     12
//                     123
//                     1234
//                     12345

int main(){
    int i, j, n=5 ;
    for(i=1;i<=n; i++){
        for(j=1; j<=i; j++)   printf("%d",j);
        printf("\n");
    }
    return 0;
}
//done