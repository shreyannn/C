#include <stdio.h>

/*
for(initializationStatement; testingEquation ; updatingStatement){
    body of for loop
} 
*/

// direction -> initializingStatement -> testingEQN -> body -> updatingStatement -> testingEQN -> body -> updating -> .................

int main(){

    for(int i=1;i<=20;i+=2){         // initialization statement ek choti matra run hunxa
    printf("%d\n",i);    
    }

    return 0;
}