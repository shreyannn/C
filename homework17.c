#include <stdio.h>   // WAP to generate Fibonacci series of n terms entered by user using iteration. 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55… 
       
int fib(int a);              // iteration -> recursion.  

int main()
{
    int n;
    printf("enter the nth element :");
    scanf("%d", &n);
    for(int i=1; i<=n ; i++){                      // loop le series dinxa one by one.
    printf(" element %d is :%d\n", i, fib(i));
    }
    return 0;
}
int fib(int a)   
{

    if (a == 1)            // we can see that in fibonacci series last 2 term add garera new term aouxa          
    {                      // so hamile 2 ta term lai ending recursive condition banounu parxa...
        return 0;
    }
    if (a == 2)
    {
        return 1;}
    
    else
    {
        return fib(a-1) +  fib (a-2);            //  3rd term = (3-1)term + (3-2)term
    }                                            //           =  2nd term +  1st term
}
//done