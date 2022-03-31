#include <stdio.h>
#include <string.h>

int main(){
    int c,count=0;
    char str[]="hello 33 435world";
    c=strlen(str);
    printf("string length is %d\n",c);

    for(int i=0;i<c;i++){
        // if(str[i]=='a'||str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            // if(str[i]=='0' ||str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' ||str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9'){
                if(str[i]==' '){
            count++;
        }
    }
    // printf("the number of vowels are %d",count);
     printf("the number of digits are %d",count);

    return 0;
}