/* 

WE CANNOT SEND OR RETURN ARRAY or STRING DIRECTLY TO OR FROM FUNCTION.

while SENDING int array or char array (string) into function we use pointer to send the address of first value of array. 

 if arr[]={1,2,3,4,5};
 we will write arr (&arr[0]) and it will automatically keep sending the address rest until \0 is shown up.

 and same for RETURNING array or string from function.  
 
*/