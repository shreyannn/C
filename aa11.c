#include <stdio.h>
    int main(){
        int num,prime;
        int arr[]={1,2,3,4,5,7,7,8,9,10};
        printf("enter any number : ");
        scanf("%d",&num);
        for(int i=0;i<10;i++){
            if(arr[i]==num){
                prime=1;
                break;                               // multiple times print hunna if same number 2 choti array ma save garexa
            }
        }
        if(prime==1){
            printf("element found in array.");
        }
        else{
            printf("element not found in array.");
        }
    return 0;
}