// #include <stdio.h>

// int main(){
//     int i =0;
//     int a=1;
//     do{
//         printf("hello student %d! \n",a);
//         i++;
//         a++;
//     }while(i<5);
//     return 0;
// }



#include <stdio.h>

int main(){
    int sum=0;
    for(int i=1; i<=10; i++){
        sum+=i;
    }
    printf("the sum from 1 to 10 is %d",sum);
    return 0;
}

