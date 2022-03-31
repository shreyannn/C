#include<stdio.h> 
#include<conio.h>

#include<math.h>

void main(){

int x=2, n=5, sum=0, i;

// clrscr();
 for(i=1; i<n; i++)
{
if(i%2==0){

sum==sum-pow(x,i);} 
else
{
sum=sum+pow(x,1);
}
}
printf("sum=%d",sum);

getch();
}