/* 
    write a program to findout largest number from 3 given number 
    num1 = 15
    num2 = 35
    num3 = 30
    steps
    1   declare 3 variables, num1, num2 and num3
    2   accept input in all 3 variables
    3   compare num1 and num2
        num1 greater then num2 then 
    4   compare num1 and num3
        num1 greater then num3 then 
    5   display num1 is biggest number 
    6   otherwise
    7   display num3 is biggest number
    8   otherwise of step 3
    9   compare num2 and num3
        if num2 greater then num3 then 
    10  display num2 is biggest number 
    11  otherwise 
    12  num3 is biggest number 
*/
#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("enter num1");
    scanf("%d",&num1);

    printf("enter num2");
    scanf("%d",&num2);
    
    printf("enter num3");
    scanf("%d",&num3);

    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("num1 is biggest number");
        }
        else 
        {
            printf("num3 is biggest number");
        }
    }
    else 
    {
        if(num2>num3)
        {
            printf("num2 is biggest number");
        }
        else 
        {
            printf("num3 is biggest number");
        }
    }
}