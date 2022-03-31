#include <stdio.h>    // program to check given string is palindrome or not.
#include <string.h>
    int main(){  
    int a,prime;
    char str[10]="elle";
    a=strlen(str);

    for(int i=0;i<a;i++){              //   for(int i=0;i<=(a/2);i++){      loop extra run garnu pardeina
        if(str[a-1]!=str[i]){
        prime=1;
        break;
        }
        a--;
    }
 
    if(prime==1){
    printf("the string is not palindrome.");
    }
    else{
        printf("the string is palindrome.");
    }
    return 0;
}
//done