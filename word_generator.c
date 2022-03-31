#include <stdio.h>     // generate the given word or sentence upto n times.

int main(){
    char arr[25];
    int n;

    printf("enter the sentence: ");
    gets(arr);
    printf("how many times you want to generate that sentence: ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
    printf("%s\n",arr);
    }

    return 0;
}