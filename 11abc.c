#include <stdio.h>

int main(){
    FILE* file;
    int num;
    //opening a file
    file = fopen("111aaa111.txt","r");
    if(file==NULL){
        printf("file does not exist.");
    } 
    else{
        printf("file exists\n");
        //reading character from a file
        while((num=getw(file)) != EOF){
            // putchar(character);
            printf("%d",num);
            // if(num%2==0){
            //     fprintf(ptr2,"%d",num);
            // }
        }
    }
    //closing a file
    fclose(file);
    return 0;
}