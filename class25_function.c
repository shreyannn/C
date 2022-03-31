#include <stdio.h>

/* types of function 
1. Standard library function/ Built in function (eg. printf(), scanf(), strlen(), strcmp(), strcat(), sqrt(), etc )
2. User defined function
     return_type fuction_name(){
         body of function
     }
*/

void display(){         // non parameterized function.
    printf("this is display function.\n");
}

void add(int a , int b){         // parameterized function. where a, b are parameters
    printf("the sum of %d and %d is %d.\n",a,b,a+b);
}

int multiply(int num1 , int num2){
    int product;
    product= num1 * num2;       
    return product;
}

int main(){
    display();
    add(3,4);
    
    int result = multiply(2,4);
    printf("the product of 2 and 4 is %d.\n",result);
    return 0;
}