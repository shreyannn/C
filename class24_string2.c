#include <stdio.h>
#include <string.h>
int main(){
    char name1[20], name2[20];    // while only declaring the char array mention the memory space inside it. ie [20];
    printf("enter first name : ");
    gets(name1);
    printf("enter second name : ");
    gets(name2);

    strcat(name1, name2);  // this function adds name2 data in name1, keeping the name2 data same.
    //    (target, source);   add
    puts(name1);
    puts(name2);
    return 0;
}