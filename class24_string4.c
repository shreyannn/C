#include <stdio.h>
#include <string.h>
int main(){
    char name1[20], name2[20];  
    // printf("enter first name : ");
    // scanf("%s",name1);       // scanf only takes first name.
    // puts(name1);
     
    printf("enter full name: ");
    gets(name2);                         // gets is use to take full name since it takes space as an input
    puts(name2);
    printf("enterschool name: ");
    gets(name1);
    puts(name1);

    // dont use gets and scanf together.
    return 0;
}