#include <stdio.h>      // find prime numbers between any two numbers using function.

void prime(int num1, int num2)
{
    int prime;
    for (int num = num1; num <= num2; num1++)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                printf("%d\n",num);
                
            }
            
        }
    } 
}

int main()
{
    int num1, num2;
    printf("enter starting number: ");
    scanf("%d", &num1);
    printf("enter ending number: ");
    scanf("%d", &num2);
    prime(num1, num2);
    return 0;
}