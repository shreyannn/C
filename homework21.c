#include <stdio.h>    // WAP to find cubes and squares of first n natural numbers entered by user.
 
void square(int n){
    printf("squares of first %d natural numbers are: \n",n);
    for(int i=1; i<=n; i++){
        printf("%d\n",i*i);
    }
}
void cube(int n){
    printf("squares of first %d natural numbers are: \n",n);
    for(int i=1; i<=n; i++){
        printf("%d\n",i*i*i);
    }
}
int main(){
    int n;
    printf("enter any number : ");
    scanf("%d",&n);
    square(n);
    cube(n);

    return 0;
}