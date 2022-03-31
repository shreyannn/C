#include <stdio.h>  // WAP to read a string and search a specified word in the given string.

void check (char *str1 , char* str2){
while(*str1!='\0'){         // value at address
          if(*str2==*str1){
              printf("%c",*str2);
          }
          str1++;
          str2++;
    }
}


int main(){
    char str1[15],str2[10];
    printf("enter string: ");
    gets(str1);                  // for multiple word
    scanf("%s",&str2);            // for one word
    check(str1,str2);
    
    return 0;
}