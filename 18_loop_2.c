/*
    write a program to print below pattern using while loop
    1   8   27  64  125 .... 10000
    1   2   3   4   5   .....
    steps
    ---------------------------------
    1) create variable number,qube
    2) store 1 into number
    3) calculate qube of number
        qube = number * number * number
    4) display qube
    always change variable using expression not using assignment
    5) increase number by 1
       number = number + 1

    6) qube = number * number * number
    7) display qube (8)
    8) number = number + 1

    9) qube = number * number * number
    10) display qube
    11) increase number by 1
*/
#include <stdio.h>
void main()
{
    int number, qube=0;
    number = 1;

    while (qube<9261)
    {
        //loop body
        qube = number * number * number;
        printf("%d\t", qube);
        number = number + 1; // 2
    }
}
