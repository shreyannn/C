#include <stdio.h>
 /*
   File Handling
            creating a new file
            opening an existing file
            reading data from existing file
            writing data to a file
            closing the file

   File mode -> Description
    r -> opens a text file in read mode
    w -> opens a text file in write mode
    a -> append
    r+ -> read and write mode
    w+ -> read and write mode
    a+ -> read and append mode
    rb -> opens a binary file in read mode
    wb-> opens a binary file in write mode
    ab -> opens a binary file in append mode 
    rb+ -> opens a binary file in read and write mode
    wb+ -> opens a binary file in read and write mode
    ab+ -> opens a binary file in read and append mode
*/
int main(){
     FILE *ptr;    //here ptr is FILE pointer.

    // file_pointer = fopen("filename.type","mode");

    ptr = fopen("sample.txt" , "r");      // ----> for reading the file.       -- if the file doesnot exist, fopen returns NULL.
    // ptr = fopen("sample.txt" , "w");  // ----> for writing to the file.     -- if the file exist, the content will be overwritten.  if it doesnt exist, it will be created.
    // ptr = fopen("sample.txt" , "a");    // ----> for appending to the file.    -- if the file doesnot exist, it will be created.
    //                                        append --> to add something at the end of the existed file.
    return 0;
}