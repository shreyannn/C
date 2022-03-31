// static variable  -- purano value save garera rakhxa.
#include <stdio.h>
void func(){
    static int count=0;   // if static then purano value mei work garxa
    count++;
    printf("%d\n",count);
}

int main(){
    func();    //1
    func();    //2
    func();    //3
    func();    //4

    return 0;
}