#include <stdio.h>
#include <string.h>   // YES, we can pass structure to a function.

typedef struct employee {      // typedef is used to give alias(nickname) to a data type.  especially to make it shorter.      
      int code;
      float salary;
      char name[15];
}emp;                 // now we can write emp in place of struct employee.  we can also write struct employee.

void show(emp emp1);

int main(){
    emp e1;
    e1.code = 1001;
    e1.salary = 3322.54;
    strcpy(e1.name,"harry");

    show (e1);
    printf("%d",e1.code);    // the value wont change because it has sent the copy of the structure not the actual address.
    return 0;
}

void show(emp emp1){
    printf("your code is: %d \n", emp1.code);     //here emp is the variable in the function which is e1.
    printf("your salary is: %.3f \n",emp1.salary);
    printf("your name is: %s\n",emp1.name);
    }