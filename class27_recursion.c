/* recursion function

void test(){
    printf("hello world.");
    test();
}
*/

#include <stdio.h>     // sum of first n natural numbers.

int sum(int n){
    if(n==0){                // stoping point.
        return 0;
    }
    else{
        return n+sum(n-1);  /* return 3 + 2 + 1 + 0 ;  --> 3+sum(2) 
                                                       --> 3+2+sum(1) 
                                                       --> 3+2+1+sum(0) 
                                                       --> 3+2+1+0   */
    }
}
int main(){
    int n;
    printf("enter a positive integer : ");
    scanf("%d",&n);
    printf("%d",sum(n));
    
    return 0;
}