#include <stdio.h>  //WAP to read three numbers from user and display the largest among them.

int main(){
    int a,b,c;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("enter third number:");
    scanf("%d",&c);
    if(a>b && a>c){      
        printf("%d is the largest number.\n",a);
    }
    else if(b>c && b>a){
        printf("%d is the largest  number.\n",b);
    }
    else{
     printf("%d is the largest number.\n",c);
    }
    return 0;
} 
//done