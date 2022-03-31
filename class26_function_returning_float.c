#include <stdio.h>

float calculateTotal(float* marks){     // here we are taking address of marks[] array.
    float sum=0;
    for(int i=0;i<5;i++){
        sum+=marks[i];
    }
    return sum;
}

int main(){

    float marks[] = {89.2, 45.6, 78, 80.9, 55.7}, totalMarks;
    totalMarks = calculateTotal(marks); 
    printf("Total marks is %f",totalMarks);
    return 0;
}
