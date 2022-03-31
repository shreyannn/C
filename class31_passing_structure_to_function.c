#include <stdio.h>

struct student{
    int rollno;
    char name[20];
};

void display(struct student s){
    printf("details of students :\n");
    printf("%s\n",s.name);
    printf("%d",s.rollno);
}
int main(){
    struct student s1;
    printf("details of student:\n");
    printf("enter name :");
    scanf("%s",s1.name);
    printf("enter rollno :");
    scanf("%d",&s1.rollno);
 
    display(s1);


    return 0;
}