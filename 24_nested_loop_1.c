/* write a program to display multiplication table of 1 to 10
    steps
    ---------------------------------------------------
    1   create variable number, multiplier, result
    2   store 1 into number
    3   store 1 into multiplier

    4   multiply number with multiplier and store result into result variable
        result = number * multiplier
    5    print number X multiplier = result
    6   multiplier = multiplier + 1

    7   result = number * multiplier
    8   print number X multiplier = result
    9    multiplier = multiplier + 1

    here steps 4 to 6 are repeative steps so we will not write it further
*/
#include <stdio.h>
void main()
{
    int number, multiplier, result;
    char letter;

    number = 1;
    while (number <= 10) //outer loop 
    {
        multiplier = 1;
        do
        {
            result = number * multiplier;
            printf("%2d X%2d=%3d\n", number, multiplier, result);
            multiplier++; // postfix
        }while (multiplier <= 10); //inner loop 
        printf("\n press enter to continue");
        scanf("%c", &letter);
        number = number + 1;
    }
}