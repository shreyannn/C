#include <stdio.h>

int main(){

    // bitwise operation
      // 1. AND operator -> IF 1 1 ->1 , otherwise 0 ---> &
      // 2. OR operator -> IF, 0 0 ->0, ohterwise 1 ---> |
      // 3. One's complement -> IF 0 ->1, 1-> 0 ---> ~  (not sure)




                //8421
    int a=10;   //1010 
    int b=7;    //0111
                            //0010 (AND operator) (2)
                //1111 (OR operator) (15)



    printf("%d\n",a|b);
    printf("%d\n",a&b);



    return 0;
}