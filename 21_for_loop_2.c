// write a program to display lowercase alphabets and their ascii code
/*
    steps
    --------------------
    1) create variable ascii
    2) store 65 into ascii 65

    3) convert 65 into character
    4) display ascii variable and character
    5) increase ascii variable by 1

    6) convert 66 into character
    7) display ascii variable and character
    8) increase ascii variable by 1

    9) convert 67 into character
    10)increase ascii variable by 1
    11)display ascii variable and character

    steps are repeatative so we will not write steps further and will code
*/
#include <stdio.h>
void main()
{
    int ascii;
    char alphabets;
    for(ascii = 65;ascii<=90;ascii++) 
    {
        alphabets = ascii;
        printf("%c = %d \n", alphabets, ascii);
    }
}
