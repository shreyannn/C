#include <stdio.h>  /* WAP to create a student structure that has name, roll, marks, dob ( where dob is another structure having members year, month and day), phone as members. Read member values from user and display the details of 5 students entered by user*/

struct dateofbirth{
    int year;
    char month[10];
    int date;
};

struct student{
    char name[15];
    int roll;
    float marks;
    struct dateofbirth dob;     // imp step
    long long phone; 
};

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
    printf("date of birth\nyear: ");
    scanf("%d",&std[i].dob.year);
    printf("month: ");
    scanf("%s",std[i].dob.month);
    printf("date :");
    scanf("%d",&std[i].dob.date);
    printf("enter your phone no: ");
    scanf("%d",&std[i].phone);
    }
     
    for(i=0;i<n;i++){
    printf("the name of the student is : %s\n",std[i].name);
    printf("rollno is : %d\n",std[i].roll);
    printf("marks : %f\n",std[i].marks);
    printf("dateofbirth\n\t year: %d\n",std[i].dob.year);
    printf("\t  month : %s\n",std[i].dob.month);
    printf("\t  date : %d\n",std[i].dob.date);
    printf("phone no. : %d\n",std[i].phone);
    }
    return 0;
}
//done