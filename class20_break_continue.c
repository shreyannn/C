#include <stdio.h>

int main(){
    for(int i=1; i<=10;i++){
        if(i==5){
            break;   // this skips the loop completely.   break le afu bhako loop ra tyo bhanda mathi ko loop lai stop gardinxa.
        }
        printf("%d\n",i);
    }

printf("\n\n");
     for(int i=0; i<=10;i++){
        if(i==5){
            continue;  // this skips particular loop.
        }
        printf("%d\n",i);
    }

    return 0;
}