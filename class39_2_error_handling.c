#include <stdio.h> 

   //      perror will print the error itself.

int main(){
    FILE *file;     
    file = fopen("does_not_exist.txt","r");
    if(file==NULL){
        perror("Error is ");
        printf("file does not exist.");
    } 
    else{
        fprintf(file, "%s","text message.");
        }
    if(ferror(file)){       
        printf("error while writing in file.");    //this line wont be print since there is no error in the code. first IF condition was right so the code didnot go through else statement and since it didnot go through else statement, it is error free code.  
    }
    clearerr(file);      // this will clear all the error message from the file.
    fclose(file);
    return 0;
}
