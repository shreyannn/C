#include <stdio.h>
#include <string.h>

    int main(){
    char str1[20] = "BeginnersBook";
    printf("Length of string str1: %d\n", strlen(str1));

    char s1[10] = "Hello";
    char s2[10] = "World";
    strcat(s1,s2);
    printf("Output string after concatenation: %s\n", s1);

    char m1[10] = "Hello";
    char m2[10] = "World";
    strcpy(m1,m2);                      // strcpy(target, source);
    printf("Output string after copying: %s\n", m1);

     char e1[20] = "BeginnersBook";
     char e2[20] = "BeginnersBook.COM";
     if (strcmp(e1, e2) ==0)
     {
        printf("string 1 and string 2 are equal");
     }else
      {
         printf("string 1 and 2 are different");
      }
    return 0;
}