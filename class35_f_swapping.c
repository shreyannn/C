#include <stdio.h>

void swap(int *n1, int *n2){    // we are swapping the addresses not values
    int temp;        
    temp= *n1;       // value at address  
    *n1 =*n2;
    *n2 = temp;
}

int main(){
    int num1=100, num2=200;

    printf("before swap\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n",num2);

    // passing memory address as function argument.
    swap(&num1, &num2);    
  /* we need to send memory address to the function then only 
  we can change the value of the variable of main funciton(int main) from FUNCTION or else we cannot. */
    printf("after swap\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n",num2);
    return 0;
}