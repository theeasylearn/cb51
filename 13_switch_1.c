/*
    write a program to display name of week day of given week day number.
    ----------------------------------------------------------------------
    steps
    ---------------------------------------------
    1) create variable day
    2) accept input from user in day
    3) check day and print name of the day
            If day equals to 1 then print Monday
            If day equals to 2 then print Tuesday
            If day equals to 3 then print Wednesday
            If day equals to 4 then print Thursday
            If day equals to 5 then print Friday
            If day equals to 6 then print Saturday
            If day equals to 7 then print Sunday
            Otherwise print Invalid day
*/
#include <stdio.h>
void main()
{
    int day;
    printf("input day of week");
    scanf("%d", &day);
    switch (day)
    {
        case 1:
            printf("monday");
        break;

        case 2:
            printf("tuesday");
        break;

        case 3:
            printf("wednesday");
        break;

        case 4:
            printf("thursday");
        break;

        case 5:
            printf("friday");
        break;

        case 6:
            printf("saturday");
        break;

        case 7:
            printf("sunday");
        break;

        default:
            printf("invalid day");
    }
}