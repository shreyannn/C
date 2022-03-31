#include <stdio.h> 
/*
            error handling in C-Programming
            ferror()
            if(ferror(file)){
            printf("error while opening source file");
}
*/
int main(){
    FILE *file;     
    file = fopen("class38_sample.txt","r");
    if(file==NULL){
        printf("file does not exist.");
    } 
    else{
        fprintf(file, "%s","text message.");
        }
    if(ferror(file)){     // it will show error since fprintf wont be able to print inside the file in read mode.    //this condition will only be run if there is error in the program.
        printf("error while writing in file.");      
    }
    fclose(file);
    return 0;
}
