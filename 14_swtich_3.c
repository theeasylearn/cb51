/* write a program to find whether given letter is vowel or not
   -------------------------------------------------------------
   steps
   -------------------------------------------------------------
   1    create variable letter
   2    accept one letter from user & store in variable letter
   3    check whether given letter is a or e or i or o or u
        If letter is 'a' then print "it is vowel"
        If letter is 'e' then print "it is vowel"
        If letter is 'i' then print "it is vowel"
        If letter is 'o' then print "it is vowel"
        If letter is 'u' then print "it is vowel"
        Otherwise print "it is not vowel"
*/
#include<stdio.h>
void main()
{
    char letter; //char type variable can store only one alphabet or digit or symbol
    printf("enter any one letter");
    scanf("%c",&letter);
    switch(letter)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("it is vowel");
        break;
        default:
            printf("it is not vowel");
    }
}