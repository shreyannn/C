#include <stdio.h>

int main(){
    char day;
    printf("enter the day in number: ");
    scanf("%c",&day);
    switch(day){
        case 'a':
        printf("sunday");
        break;              // break garena ki given number ko talah ko sab print hunxa
        case 'b':
        printf("monday");
        break;
        case 'c':
        printf("tuesday");
        break;
        case 'd':
        printf("wednesday");
        break; 
        case 'e':
        printf("wednesday");
        break;
        // default:
        // printf("invalid number");
        // break;
    }
    return 0;
}    
