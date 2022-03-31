#include <stdio.h>  // 1                           always start with line then space then star/number
//                     22
//                     333
//                     4444
//                     55555

int main(){
    int i, j, n=5;
    for(i=1;i<=n; i++){           // for line
        for(j=1; j<=i; j++){
            printf("%d",i);      // how many times to run the loop so we can print 222, 333, 4444     
        }
        printf("\n");                 // for printing
    }
    return 0;
}
//donw