/* Four types of storage classes. 
It determines scope, visibility, and lifetime of a variable.

1. automatic (Local variable)
2. external (global variable)
3. static
4. register   */


#include <stdio.h>
int num=100;                // global variable.  (useable anywhere in the program)

void sum(){
    printf("%d\n",num);
}

int main(){
    printf("%d\n",num);
    sum();
    return 0;
}

// #include <stdio.h>

// void sum(){
//     int num=12;              // local variable. (only useable in block where declared.)
//     printf("%d\n",num);
// }

// int main(){
//     int num=14;              // local variable. 
//     printf("%d\n",num);
//     sum();
//     return 0;
// }