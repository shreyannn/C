#include <stdio.h>  //WAP to illustrate passing structure members to a function.    ( structure members? -> elements of structure 
//                                                                                     entire structure? -> m1

struct student{
    char name[15];
    int roll;
    float marks;
    int age;
};

void function(int  roll, char* name){
    printf("\n**student information**\n");
    printf("rollNo - %d\n",roll);
    printf("name - %s\n",name);
}

int main(){
    struct student m1;
    printf("enter your name: ");
    scanf("%s",m1.name); 
    printf("enter your rollno. : ");
    scanf("%d",&m1.roll);
    printf("enter your marks: ");
    scanf("%.2f",&m1.marks);
    printf("enter your age: ");
    scanf("%d",&m1.age);

    function (m1.roll, &m1.name);    
    return 0;
}
