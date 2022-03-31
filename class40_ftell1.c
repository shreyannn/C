#include <stdio.h>

int main(){
    FILE* file;
    char character;
    file = fopen("class40_2_.txt","r");
    if(file==NULL){
        printf("file doesnot exit.");
    }
    else{
        printf("file exists.\n");    // 1 character = 1byte
        fseek(file, 6, 0);
        printf("current position of pointer is %d.\n",ftell(file)); 
        while((character=fgetc(file)) != EOF){  //eof
            putchar(character);
        }
    }
    fclose(file);
    return 0;
}