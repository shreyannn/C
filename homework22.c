#include <stdio.h>    // WAP to check whether entered character is vowel or consonant.

void check(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o'|| c=='u'){
        printf("It is vowel.");
    }
    else{
        printf("it is consanant.");
    }
}
int main(){
    int c;
    printf("enter any character : ");
    scanf("%c",&c);
    check(c);
    return 0;
}