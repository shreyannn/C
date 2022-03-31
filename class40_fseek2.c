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
        fseek(file, -5, 2);     //   - means to move file pointer at left side..
                printf("current position of pointer is %d.\n",ftell(file)); 
        while((character = fgetc(file)) != EOF){  
            putchar(character);
        }
    }
    fclose(file);
    return 0;
}