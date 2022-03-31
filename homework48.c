#include <stdio.h>  //WAP to read name, roll and marks of 5 students using array of structure.
// Display the name and roll of those students having marks greater than 80.

struct student{
    char name[15];
    int roll;
    float marks;
};

void function(struct student std[] ){          // imp step   while passing array into function completely we use []
    int i; 
    for(i=0;i<5;i++){
    if(std[i].marks>80){
        printf("the name of the student is : %s\n",std[i].name);
        printf("rollno is : %d\n",std[i].roll);
    }
    }
}

int main(){

    int i;
    
    struct student std[5];
    for(i=0;i<5;i++){
    printf("enter your name: ");
    scanf("%s",std[i].name);
    printf("enter your rollno: ");
    scanf("%d",&std[i].roll);
    printf("enter your marks: ");
    scanf("%f",&std[i].marks);
    }
    
    function(std);         // std = &std[i]  until \0.   first dekhi last samma sab send garxa one by one
    return 0;
}
//done