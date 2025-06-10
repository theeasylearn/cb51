/*
    write a program to convert given minutes into hours and remaining minutes 
    input: 200 minutes , output : 3 hours and 20 minutes 
    input: 75 minutes , output : 1 hours and 15 minutes 
    
    steps 
    ------------------------
    1) create variable minutes, hours as integer variable 
    2) accept minutes from user 
    3) calculate hours 
       hours(3) = minutes / 60
    4) calculate remaining minutes 
       (rational numbers) 
       200 - (3 * 60)  = 20 
       minutes = minutes - (hours * 60)
    5) display hours, and minutes 
*/
#include<stdio.h>
void main()
{
    int minutes,hours;
    printf("enter total minutes");
    scanf("%d",&minutes);

    hours = minutes / 60;
    minutes = minutes - (hours * 60);
    printf("hours = %d minutes = %d ",hours,minutes);

}