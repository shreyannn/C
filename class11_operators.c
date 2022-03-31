#include <stdio.h>
         
//postfix  -> () []                                 *associativity*   bracket -> first.
//unary  ->   ++, --, sizeof, &, |                   right to left          *a++; huda right bata associativity ie.*(a++)  
//multiplication  ->   *, /, %                       left to right         
//additive  ->   +, -                      (  + - have same precedence  so associativity will be from left to right)      
// shift  ->   <<, >>                      but multiplication * have higher precedence than additive +
// relational  ->   <,>,<=,>=
// equality  ->   ==, !=
// bitwise AND  ->   &
// bitwise XOR  ->   ^
// bitwise OR  ->   |
// logical AND  ->   &&
// logical OR  ->   ||
// Conditional  ->   ?:                             right to left
// assignment  ->   =, +=, -=, *=, /=, %=           right to left           


int main(){
    // i++  -->  i = i + 1
    int a;
    a=5*2/10;                      // since * and / have same precedence ,
    // it will  be calculated based on its associativity. ie left to right (5*2)/10 ;
    printf("%d",a);
    return 0;
}