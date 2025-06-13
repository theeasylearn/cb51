/*
    write a program to accept 24 hours format time from user and convert it & display in 12 hours format time
    steps
    ------------------------------
    1) create variable hours & accept input from user in hours
    2) check hours is greater 12 or not
        if hours is above 12 then
    3)     hours = hours - 12
    5)  display hours with pm word
        if hours is less then or equal to 12 then
    6)      display hours with am word
*/
#include <stdio.h>
void main()
{
    int hours;
    printf("enter hours");
    scanf("%d", &hours); // 18
    if (hours <= 12)
    {
        printf("%d AM", hours);
    }
    
    if (hours > 12) // < > <= >= == !=
    {
        hours = hours - 12;
        printf("%d PM", hours);
    }
}