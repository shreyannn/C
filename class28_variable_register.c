//register variable
#include <stdio.h>

int main(){
    register int a=10;  // register variable is store in register instead of ram,
                        // such that it can be obtain at faster rate than normal variables. it is used usually.
    printf("%d\n",a);
    return 0;
}