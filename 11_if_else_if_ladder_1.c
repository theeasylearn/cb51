/*
    write a program to accept monthly income from user and then calculate annual gross income, tax amount  and net income as per below income tax rule
    income tax slab
    ----------------------------------------------
    income slab                             tax
    -----------------------------------------------
    From Rs. 0 to 12,00,000         	    5%
    From Rs. 12,00,001 to Rs. 16,00,000	    15%
    From Rs. 16,00,001 to Rs. 20,00,000	    20%
    From Rs. 20,00,001 to Rs. 24,00,000	    25%
    Above Rs. 24,00,001	                    30%

    steps 
    1   create variable monthly_income,gross_income,tax_amount,net_income
    2   accept monthly income 
    3   calculate gross income 
        gross_income = monthly_income * 12 
    4   calculate tax 
    5   if gross_income is greater then or equal to 24,00,001
        tax_amount =  (gross_income * 30) / 100
    6   if gross_income is greater then or equal to 20,00,001
        tax_amount =  (gross_income * 25) / 100
    7   if gross_income is greater then or equal to 16,00,001
        tax_amount =  (gross_income * 20) / 100 
    8   if gross_income is greater then or equal to 12,00,001
        tax_amount =  (gross_income * 15) / 100     
    9   else 
        tax_amount =  (gross_income * 5) / 100     
    
    10  calculate net income 
        net_income = gross_income - tax_amount
    
    11  print gross_income, tax, net_income 

*/
#include<stdio.h>
void main()
{
    int monthly_income,gross_income;
    float tax,net_income;
    printf("enter monthly income");
    scanf("%d",&monthly_income);
    
}