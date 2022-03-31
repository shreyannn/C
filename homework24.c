#include <stdio.h> //     *
//                       ***
//                      *****
//                     *******

int main(){
    int n, r, c, s;
    
    n=4;
    for(r=1; r<=n; r++){        // 4 lines (n) whereas r=1 -> 1st line
        for(s=1; s<=n-r; s++) printf(" ");       // for space ; it depends on n and r
        for(c=1; c<=(2*r-1); c++) printf("*");            // for star
        printf("\n");
    }
    return 0;
}


// int main(){
//     int n, r, s;
//     float c;
//     n=4;
//     for(r=1; r<=n; r++){        
//         for(s=1; s<=n-r;s++) printf(" ");      
//         for(c=1; c<=r; c=c+0.5) printf("*");           
//         printf("\n");
//     }
//     return 0;
// }