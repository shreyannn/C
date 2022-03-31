#include <stdio.h>    // WAP that asks user for a number and then display only non prime numbers from 2 to n.

int main(){
    int num,prime;
    printf("enter a number: ");
    scanf("%d",&num);
    for(int n=3; n<=num;n++){
    for(int i=2; i<n; i++){      //will be skip by break
        if(n%i==0){
            printf("%d\n",n);
            break;      // break le afu bhako loop ra tyo bhanda mathi ko loop lai stop gardinxa.
        }
    }
 }
   

    return 0;
}