#include <stdio.h>   //WAP to display the series 1/2 2/3 3/4 4/5 …. n-1/n

int main(){
  int n,j=2;
  printf("enter any number: ");
  scanf("%d",&n);
    for(int i=1;i<=n-1;i++){
        printf("%d/%d\n",i,j);
        j++;
    }
    return 0;
}