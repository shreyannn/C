#include <stdio.h> 
#include <string.h>   

struct student{
    char name[25];        
    int rollno;             
    char address[25];     
    char course[25];
    float percentage;
    char gender[6];
};

int main(){
    struct student s1;
    printf("enter the name of student : ");
    scanf("%s",&s1.name[0]);     //or scanf("%s",s1.name); 
    printf("enter rollNo :");
    scanf("%d",&s1.rollno);
    printf("enter address :");
    scanf("%s",s1.address);
    printf("enter course: ");
    scanf("%s",s1.course);
    printf("enter percentage :");
    scanf("%f",&s1.percentage);
    printf("enter gender :");
    scanf("%s",s1.gender);
    printf("\n");

    printf("%s\n",s1.name);
    printf("%d\n",s1.rollno);
    printf("%s\n",s1.address);
    printf("%s\n",s1.course);
    printf("%f\n",s1.percentage);
    printf("%s\n",s1.gender);
    printf("***************\n");
    
    return 0;
}