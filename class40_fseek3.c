#include <stdio.h>

int main(){
    FILE* file;
    char character;
    int n;
    file = fopen("class40_2_.txt","r");
    if(file==NULL){
        printf("file doesnot exit.");
    }
    else{
        printf("file exists.\n");   
        printf("enter no of byte you want to skip:");
        scanf("%d",&n);
        fseek(file, n, 0); 
        while((character=fgetc(file)) != EOF){  
            putchar(character);
        }
    }
    fclose(file);
    return 0;
}