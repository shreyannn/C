#include <stdio.h>  /* bitwise operator or bit level operator.

left shift operator (<<) :                        shift garexi previous place ma 0.
num=15; binary eqv. 1111
num << 1
11110 -> decimal value = 30
num << 2
111100 -> decimal value = 60
num << 3
1111000 -> decimal value = 120

right shift operator (>>) :                       shift garexi previous place ma 0 and right side ko num delete garne
num=15; binary eqv. 1111
num >> 1
0111 -> decimal value = 7
num >> 2
0011 -> decimal value = 3
num >> 3
0001 -> decimal value = 1
*/

int main(){
    int num =15;
    // num = num >> 1;
    // printf("%d\n",num);
    printf("left shift operator::\n");
    printf("%d\n",num << 1);
    printf("%d\n",num << 2);
    printf("%d\n",num << 3);
    
    printf("right shift operator::\n");
    printf("%d\n",num >> 1);
    printf("%d\n",num >> 2);
    printf("%d\n",num >> 3);

    return 0;
}