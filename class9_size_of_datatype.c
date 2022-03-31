#include <stdio.h>

int main(){

    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(char));
    
    int a=5;
    float b=5.5;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",&a);

    return 0;
}