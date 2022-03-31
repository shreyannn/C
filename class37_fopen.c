#include <stdio.h>

int main(){
    FILE* file;
    file = fopen("D:\\file handling\\hell.txt","w");     //this will create file in specific location. note- use double back slash ie. \\ .
    // file = fopen("hell.txt","w");    // and this will create file in current vscode workshop.
    if(file!=NULL){
        printf("file has been created.");   // file create bhayena bhane it fill will return null value
    }
    else{
        printf("file has not been created.");     
    }
    fclose(file);        // while opening a file in C language, there will be a link between your code and OS. so fclose will save resources by closing that link.
    return 0;
}