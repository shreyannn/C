#include <stdio.h>
/*ternary operator
condition_is_true ? return_X : return_Y;

*/

int main(){
    int num1=5, num2=10, largenum;
    largenum = num1> num2 ? num1 : num2 ;
    printf("largest number is %d\n",largenum);
    return 0;
}