#include <stdio.h>

int main(){
    FILE* file;
    char name[20];
    file = fopen("D:\\file handling\\hell.txt","w");     
        if(file!=NULL){
        printf("file has been created.\n");
        printf("enter your name: ");
        gets(name);   // to get full name
        fprintf(file, "%s" , name);
    }
    else{
        printf("file has not been created.");
    }
    fclose(file);
    return 0;
}