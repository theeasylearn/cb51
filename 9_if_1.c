/*  write a program to findout whether given number is odd or even. if number is odd then find & display qube of given number if number is even then find & display square of given number 
    
    steps 
    -----------------------------------
    1) create variable number,remainder, result
    2) accept input from user into number variable
    3) findout whether given number os odd or even
        remainder = number % 2
        if remainder is zero then it means number is even 
    4)      findout square 
            result = number * number 
        if remainder is one then it means number is odd
    5)      findout qube
            result = number * number * number 
    6)  display result variable

*/
#include<stdio.h>
void main()
{
    int number,remainder,result;
    printf("Enter number");
    scanf("%d",&number); //5

    //process/expression
    remainder = number % 2;
    if (remainder==0) //relational operator < > <= >= == !=.
    {
        printf("it is even number \n");
        result = number * number;
    }

    if (remainder==1)
    {
        printf("it is odd number \n");
        result = number * number * number;
    }
    printf("result = %d",result);
}