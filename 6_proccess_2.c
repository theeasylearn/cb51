/* 
    write a program to swap digits of given 2 digit number 
    input : 89 output : 98
    input : 28 output : 82
    steps
    ----------------------------------
    1) create variable amount,last,first
    2) accept amount from user 
    3) get last digit of amount (89)
       last(9) = amount % 10  
    4) get first digit of amount 
        89/10  -> 8.9 
        first = amount / 10
    5) combine last and first  
        (9 * 10) + 8
        amount = (last * 10) + first 
    6) display amount
*/
#include<stdio.h>
void main()
{
    int amount,first,last;
    printf("Enter amount");
    scanf("%d",&amount);
    last = amount % 10;
    first = amount / 10;
    amount = (last * 10) + first;
    printf("amount %d",amount);
}