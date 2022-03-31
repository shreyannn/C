#include <stdio.h>   // WAP to illustrate the use of enumerated data type

enum week { sun, mon, tues, wed, thurs, fri, sat };        // {0, ,1, 2, 3, 4, 5, 6, 7}
//  enum is keyword , week is enum variable , sun,mon,tues,..are enumenators  
int main(){
    enum week day;    // day is object of enum week.      int day; is also working
    day=wed;
    printf("%d",day);
    return 0;
}