#include <stdio.h>

int main(){
    int num1,num2;
    printf("enter first number: ");
    scanf("%d",&num1);
    printf("enter second number: ");
    scanf("%d",&num2);

    printf("\n--> the sum of %d and %d = %d\n",num1,num2,(num1+num2));
    printf("--> the diffence of %d and %d = %d\n",num1,num2,(num1-num2));
    printf("--> the product of %d and %d = %d\n",num1,num2,(num1*num2));
    printf("--> the division of %d and %d = %d\n",num1,num2,(num1/num2));
    printf("--> the modulas(remainder) of %d and %d = %d\n\nEND",num1,num2,(num1%num2));



    return 0;
}