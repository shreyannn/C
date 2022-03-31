#include <stdio.h>
#include <string.h>
int main(){
    char name1[20], name2[20];  
    printf("enter first name : ");
    scanf("%s",name1);
    printf("enter full name : ");
    gets(name2);              // we cannot use scanf and gets together because 
    // when we press enter after writing the first name then that enter will be taken as an input for gets.

    puts(name1);
    puts(name2);
    printf("%s",name2);
    return 0;
}