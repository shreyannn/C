#include <stdio.h>
#include <string.h>

union student{        // memory block ehuta matra hunxa. (read erase gardei use hunxa) common memory share garxa every datatype le. new value rakhna purano value erase garna parxa.
   char name[20];       
   int rollno;   
};
struct car{            // each datatype lai diff memory block hunxa.
    char model[20];
    int noofpass;
};

int main(){
    union student std;
    strcpy(std.name,"ram");
    std.rollno=42;
    printf("%s\n",std.name);     // this will give garbage value because its value was erased to store rollno.
    printf("%d\n",std.rollno);

    struct car c1;
    strcpy(c1.model,"aharhm");
    c1.noofpass=5;
    printf("%s\n",c1.model);
    printf("%d",c1.noofpass);
    
    return 0;
}