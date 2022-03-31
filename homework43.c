#include <stdio.h>   // WAP to create a student structure that has name, roll, marks, age, phone as
// members. Read member values from user and display the data entered by user.

typedef struct student{
    char name[15];        // these are structure members.    each element of structure is called structure members
    int roll;
    float marks;
    int age;
    long long phone;             // for number equal to and greater than 10.
}member;

int main(){
    member m1;
    printf("enter your name: ");
    scanf("%s",m1.name);   // scanf("%s",&m1.name[1]);
    printf("enter your rollno. : ");
    scanf("%d",&m1.roll);
    printf("enter your marks: ");
    scanf("%f",&m1.marks);
    printf("enter your age: ");
    scanf("%d",&m1.age);
    printf("enter your phone no. : ");
    scanf("%d",&m1.phone);

    printf("name - %s\n",m1.name);
    printf("roll no. - %d\n",m1.roll);
    printf("marks - %.2f\n",m1.marks);
    printf("age - %d\n",m1.age);
    printf("phone - %d\n",m1.phone);

    return 0;
}
//done