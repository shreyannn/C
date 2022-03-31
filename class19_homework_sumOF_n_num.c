//homework
#include <stdio.h>

int main(){
    int product=1;
    for(int i=1; i<=5; i++){
        product*=i;
    }
    printf("\n\n     ***** the product from 1 to 5 is %d *****\n\n",product);


    int sum=0;
    for(int a=2; a<=20; a+=2){
        sum+=a;
    }
    printf("\n   ***** the sum of 1st ten even numbers is %d *****\n\n",sum);
    return 0;
}



// #include <stdio.h>

// int main(){
//     int product=1, i=1;
//     while(i<=5){
//         product*=i;
//         i++;
//     }
//     printf("\n\n     ***** the product from 1 to 5 is %d *****\n\n",product);

//     int sum=0, a=2;
//     while(a<=20){
//         sum+=a;
//         a+=2;
//     }
//     printf("\n   ***** the sum of 1st ten even numbers is %d *****\n\n",sum);

//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int product=1, i=1;
//     do{
//         product*=i;
//         i++;
//     }while(i<=5);
//     printf("\n\n     ***** the product from 1 to 5 is %d *****\n\n",product);

//     int sum=0, a=2;
//     do{
//         sum+=a;
//         a+=2;
//     }while(a<=20);
//     printf("\n   ***** the sum of 1st ten even numbers is %d *****\n\n",sum);
    
//     return 0;
// }