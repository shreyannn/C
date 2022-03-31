/* 
4 library function provided by C under <stdlib.h> header file are:
1. malloc();
2. calloc();
3. free();
4. realloc();
  
difference between malloc and calloc

     malloc                                                        calloc 
-> memory allocation                                          ->  contiguous allocation
-> memory is allocated as a single entire block for all data  ->  memory is allocated as contiguous muutiple discrete block.
-> its default value gives garbage value                      ->  its default value gives zero.
-> it contains 1 argument inside funciton.                    ->  its contains 2 arguments.  
    ie. malloc (4 * sizeof(int));                                   ie. calloc (4 , sizeof(int));



 allocate - to distribute for particular purpose
 In C language, there are certain fix rules like you cannot change the size of the array.(during run time/ in terminal)
 if the array had size for 5 integers ie: arr[5] but we only input 3 integers. normally, we dont save that extra memory.
 for that we need dynamic memory allocation. with the help of this we can save extra memory. it actually help to make the program effective and consume less data.

Defination - DMA is a way to allocate (distribute) memory to the data structure during run time. So that we can save unneccesary extra memory.
there are certain functions for DMA.

it works just like an array.
but in array we do this.  int arr[19];
we cannot write arr[n] where n is an variable.          ( edit: sometimes, it works! but it is not the best way )
for this we need dma.

*/
