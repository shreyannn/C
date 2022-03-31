#include <stdio.h>

int main(){
    FILE* file;
    char character;
    file = fopen("class40_2_.txt","r");
    if(file==NULL){
        printf("file doesnot exit.");
    }
    else{
        printf("file exists.\n");   
        // fseek(file, 6, 0); 
        fseek(file, 6, 3);    // 1 = current file pointer  
        while((character=fgetc(file)) != EOF){  
            putchar(character);
        }
    }
    fclose(file);
    return 0;
}