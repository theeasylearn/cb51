/*
    write a program to display following pattern
    1   -2    3   -4    5   -6      7       -8  ... 100
    here we observe odd number are display postively
    and even numbers are displayed negatively

    steps
    1   create variable num,temp
    2   store 1 into num
    3   if number is even number then we display it as negative number
        if number%2==0 then
            temp = 0 - number;
            display temp
    4   otherwise we display it as it is
            display number
    5   increase num by 1 //2

    6   if number is even number then we display it as negative number
        if number%2==0 then
            temp = 0 - number;
            display temp
    7   otherwise we display it as it is
            display number
    8   increase num by 1

    here we observe steps are repeative(3,4,5) so we dont code further.
*/
#include <stdio.h>
void main()
{
    int num, temp;
    num = 1; // initialization
    do
    {
        if (num % 2 == 0)
        {
            temp = 0 - num;
            printf("%10d", temp);
        }
        else
        {
            printf("%10d", num);
        }
        num++; // num = num + 1
    }while(num<=100);

    
    printf("\n end of program");
}