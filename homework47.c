#include <stdio.h>   //WAP to illustrate passing 5 student structures to a function and display their details inside function

struct student{
    char name[15];
    int roll;
    float marks;
};

void function(struct student std[], int n){          // imp step   while passing array into function completely we use []
    int i; 
    for(i=0;i<n;i++){
    printf("the name of the student is : %s\n",std[i].name);
    printf("rollno is : %d\n",std[i].roll);
    printf("marks : %f\n",std[i].marks);
    }
}

int main(){

    int n,i;
    printf("enter the total number of students whose data is needed: ");
    scanf("%d",&n);

    struct student std[n];
    for(i=0;i<n;i++){
    printf("enter your name: ");
    scanf("%s",std[i].name);
    printf("enter your rollno: ");
    scanf("%d",&std[i].roll);
    printf("enter your marks: ");
    scanf("%f",&std[i].marks);
    }
    
    function(std, n);         // std = &std[i]  until \0.   first dekhi last samma sab send garxa one by one
    return 0;
}
//done