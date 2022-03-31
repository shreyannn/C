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
    
    struct student std[2];
    for(int i=0;i<2;i++){
    printf("enter the name of student%d : ",i+1);
    scanf("%s",std[i].name);
    printf("enter rollNo :");
    scanf("%d",&std[i].rollno);
    printf("enter address :");
    scanf("%s",std[i].address);
    printf("enter course: ");
    scanf("%s",std[i].course);
    printf("enter percentage :");
    scanf("%f",&std[i].percentage);
    printf("enter gender :");
    scanf("%s",std[i].gender);
    printf("\n");

    }
    for(int i=0;i<2;i++){
    printf("%s\n",std[i].name);
    printf("%d\n",std[i].rollno);
    printf("%s\n",std[i].address);
    printf("%s\n",std[i].course);
    printf("%f\n",std[i].percentage);
    printf("%s\n",std[i].gender);
    printf("***************\n");
    }
    return 0;
}