#include <stdio.h> 
#include <string.h>

struct student{
    char name[25];          // structure ma ni function jastei string directly send hunna. so address of starting letter send garna parxa.
    int rollno;             
    char address[25];     
    char course[25];
    float percentage;
    char gender;
};

int main(){
    struct student s1, s2;
                                       // s1.name = "shreyan";    yesto garna mildeina. 
    strcpy (s1.name, "shreyan");      // OR strcpy (&s1.name[0], "shreyan");
    s1.rollno=41;
    strcpy (s1.address, "khusibu");
    strcpy (s1.course, "CSIT");
    s1.percentage= 99.99; 
    s1.gender = 'M';

    printf("\n%s\n",s1.name);
    printf("%d\n",s1.rollno);
    printf("%s\n",s1.address);
    printf("%s\n",s1.course);
    printf("%f\n",s1.percentage);
    printf("%c\n",s1.gender);

    strcpy (s2.name, "samamama");  
    s2.rollno=21;
    strcpy (s2.address, "thamel");
    strcpy (s2.course, "engineering");
    s2.percentage= 49.99; 
    s2.gender = 'M';

    printf("\n%s\n",s2.name);
    printf("%d\n",s2.rollno);
    printf("%s\n",s2.address);
    printf("%s\n",s2.course);
    printf("%f\n",s2.percentage);
    printf("%c\n\n",s2.gender);
    return 0;
}