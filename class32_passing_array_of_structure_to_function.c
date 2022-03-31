#include <stdio.h>

struct student{
    char name[20];
    int rollno;
};

void display(struct student* s){         // look..void display(struct student s[]){        
    int i;
    for(i=0; i<2; i++){
    printf("details of student %d :\n",i+1);
    printf("%s\n",s[i].name);
    printf("%d\n",s[i].rollno);
    }
}

int main(){
    int i;
    struct student std[2];
    for(i=0; i<2; i++){
    printf("details of student %d.\n",i+1);
    printf("enter name :");
    scanf("%s",std[i].name);
    printf("enter rollno :");
    scanf("%d",&std[i].rollno);
    }
    
    display(std);     //  display(&std[0]);  until \0 is detected. (it is an array} 
    

    return 0;
}