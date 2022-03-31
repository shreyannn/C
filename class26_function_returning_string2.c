#include <stdio.h>
#include <string.h>   

char* fullname( char* fname, char* lname){      // to return string from function or sending string into function, we use char*
    strcat(fname ,lname);                                           // as we send or return address of memory space where string is located not the string itself.   so, pointer is used 
    return fname;               
}
int main(){
    char fname[] = "shreyan";     
    char lname[] = "amatya";
    
    // printf("%d\n",fullname(fname,lname));
    printf("%s\n",fullname(fname,lname));     // //  fullname( &fname[0], &lname[0] ); 
    // puts(fullname(fname,lname));

    return 0;
}