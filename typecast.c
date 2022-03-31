#include <stdio.h>

int main(){
    
    int a=3,b=7;
    float c;
    c =  (float) b/a;             // we cannot write c = (float)(b/a);
    printf("%d divide by %d is %f\n",  b,a,c);
    return 0;
}