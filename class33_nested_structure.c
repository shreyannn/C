#include <stdio.h>

struct dateofbirth{
    int year;
    int month;
    int day;
};

struct address{
    char streetname[20];
    int streetno;
};

struct student{
    char name[20];
    int rollno;
    struct dateofbirth dob;       // imp step
    struct address add;
};

int main(){
    int i;
    struct student std[2];
    for(i=0;i<2;i++){
    printf("** enter student%d detail\n",i+1);
    printf("enter name:");
    scanf("%s",std[i].name);
    printf("enter rollno:");
    scanf("%d",&std[i].rollno);
    printf("enter year of birth:");
    scanf("%d",&std[i].dob.year);
    printf("enter month of birth:");
    scanf("%d",&std[i].dob.month);
    printf("enter day of birth:");
    scanf("%d",&std[i].dob.day);
    printf("enter street name (address):");
    scanf("%s",std[i].add.streetname);
    printf("enter street number (address):");
    scanf("%d",&std[i].add.streetno);
    }
    
    for(i=0;i<2;i++){
    printf("\n*** student%d detail ***\n",i+1);
    printf("name = %s\n",std[i].name);
    printf("roll no = %d\n",std[i].rollno);
    printf("date of birth -> %d/%d/%d\n",std[i].dob.year, std[i].dob.month, std[i].dob.day);
    printf("address = %s-%d\n",std[i].add.streetname,std[i].add.streetno);
    }

    return 0;
}