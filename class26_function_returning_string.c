#include <stdio.h>   

char* pertodiv(float percentage){           // to return string from function we use char* which is return type.
    if (percentage >= 80){
        return "distinction";               // returning string from function.
    }
    else if (percentage >=60){
        return "first division";
    }
    else if (percentage >=50){
        return "second division";
    }
    else if (percentage >=40){
        return "third division";
    }
    else{
        return "fail";     // " "
    }

}
int main(){
    float a;
    printf("enter your percentage :");
    scanf("%f",&a);
    puts(pertodiv(a));
    return 0;
}