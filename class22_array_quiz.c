#include <stdio.h>

int main(){
    float marks[5];

    for(int i=0;i<5;i++){
        printf("enter the marks of subject %d : ",i+1);
        scanf("%f",&marks[i]);
    }

      for(int i=0;i<5;i++){
        printf("The marks of subject %d is %f\n",i+1,marks[i] );
    }
    
    // float sum=marks[0]+ marks[1]+ marks[2]+marks[3]+marks[4];
    float sum=0;
    for(int i=0;i<5;i++){
        sum+=marks[i];
    }
    
    printf("sum is %f\n",sum);
    float percentage=(sum/500)*100;
    printf("percentage is %f\n",percentage);
    
    if(percentage<40 || marks[0]<40 || marks[1]<40|| marks[2]<40|| marks[3]<40|| marks[4]<40){
        printf("fail");
    }
    else if (percentage>=40 && percentage <60){
        printf("second division");
    }
    else if (percentage>=60 && percentage <80){
        printf("first division");
    }
    else {
        printf("distinction");
    }
    return 0;
}