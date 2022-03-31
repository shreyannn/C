#include <stdio.h>  //WAP to illustrate passing entire structure to a function.

struct student{
    char name[15];
    int roll;
    float marks;
    int age;
};

void function(struct student m1){
    printf("\n**student information**\n");
    printf("name - %s\n",m1.name);
    printf("roll no. - %d\n",m1.roll);
    printf("marks - %.2f\n",m1.marks);
    printf("age - %d\n",m1.age);
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

    function (m1);
   
    return 0;
}
//done