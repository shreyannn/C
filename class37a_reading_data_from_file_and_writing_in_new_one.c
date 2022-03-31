#include <stdio.h>   // copying data from sample.txt and writing it on new_sample.txt

int main(){
    FILE *file;        // FILE *file , *newfile;
    FILE *newfile;    
 
    char character;
    //opening a file
    file = fopen("class38_sample.txt","r");
    newfile = fopen("class38_new_sample.txt","w");
    if(file==NULL){
        printf("file does not exist.");
    } 
    else{
        printf("file exists\n");
        //reading character from a file
        while((character=fgetc(file)) != EOF){
            fprintf(newfile, "%c", character);
        }
    }
    //closing a file
    fclose(file);
    fclose(newfile);
    return 0;
}