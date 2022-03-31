#include <stdio.h>

int main(){
    FILE* file;
    char character;
    //opening a file
    file = fopen("class38_sample.txt","r");
    if(file==NULL){
        printf("file does not exist.");
    } 
    else{
        printf("file exists\n");
        //reading character from a file
        while((character=fgetc(file)) != EOF){
            // putchar(character);
            printf("%c",character);
        }
    }
    //closing a file
    fclose(file);
    return 0;
}