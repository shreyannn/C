#include <stdio.h>
#include <string.h>

int main(){

    //str declaration and initialization
    char name[]="prime";    // same line ma declare and initialize garnu parxa
    // OR
    char collegename[]={'p','r','i','r','i','\0'};

    puts(name);        // putstring   whereas in char put char
    printf("%s\n",name);
    puts(collegename);
    printf("%d\n",strlen(name));                 // for this we need <string.h> library function.
    printf("%d\n",strlen(collegename));           // it tells us the length of the string.

    
    return 0;
}