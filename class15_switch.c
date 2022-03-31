#include <stdio.h>






int main(){
    int day;
    printf("enter the day in number: ");
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("sunday");
        break;              // break garena ki given number ko talah ko sab print hunxa
        case 2:
        printf("monday");
        break;
        case 3:
        printf("tuesday");
        break;
        case 4:
        printf("wednesday");
        break; 

        default:
        printf("invalid numebr");
        break;
    }
    return 0;
}    

