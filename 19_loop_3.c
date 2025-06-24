/*
    write a program to findout compound interest of given amount, rate, year
    steps
    ------------------------------
    1   create variable amount,rate,year,interest
    2   accept input from user in amount
        copy amount into original_amount
    3   accept input from user in rate
    4   accept input from user in year

    5   calculate interest (process)
        interest = (amount * rate * 1)/1000
    6   amount = amount + interest

    7   repeat step 5 and 6 year times
        interest = amount - original_amount
    8   display interest
*/
#include <stdio.h>
void main()
{
    float amount, rate, year, interest,original_amount;
    int count;
    printf("enter amount");
    scanf("%f", &amount);

    original_amount = amount;
    
    printf("enter rate");
    scanf("%f", &rate);

    printf("enter year");
    scanf("%f", &year);
    count=0;

    while(count<year) //condition
    { 
        interest = (amount * rate * 1) / 100;
        amount = amount + interest;
        count = count + 1; //increment/decrement
    }
    interest = amount - original_amount;
    printf("final amount = %.2f", interest);
}