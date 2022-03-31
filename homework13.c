#include <stdio.h>    // WAP that asks user for a number and then display only prime numbers from 2 to n.

int main(){
    int num,i,n,prime;
    printf("enter a number: ");
    scanf("%d",&num);
    for( n=2; n<=num;n++){    // n means number.
    for( i=2; i<n; i++){    // i chai divide garera remainder check garne num.    this will also be skip by break;
        if(n%i==0){
            // prime=1;
            break;   
        }
    }  
    if(i==n){            // this case only happens if the num has no remainder 0 and i++ is activated at  
        printf("%d\n",n);   // last step but is fail to go through the loop due to the condition i<num ie. i==num.   
    } 
 }
    // if(prime==1){
    //     printf("it is not prime number.");
    // }
    // else{
    //     printf("it is prime number.");
    // }

    return 0;
}
//done