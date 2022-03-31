#include <stdio.h>
#include <windows.h>    // incresing the the given number by 1 in each sec to infinity.

int main(){
    int s;
    printf("enter a number: ");
    scanf("%d",&s);

    while(1){
        
        printf("                       -------------->   %d   <-----------------",s);
        s++;
        Sleep(1000);
        system("cls");
    }
 
    return 0;
}