/* write a program to print following pattern
   1    3   5   7   9   11  .... 100
   steps
   1) create variable number
   2) store 1 into number

   3) display number
   4) number = number + 2
   5) display number
   6) number = number + 2
   7) display number
   8) number = number + 2

   here we observe that steps repeat therefore we stop writing steps further and we will write code
*/
#include <stdio.h>
void main()
{
   int number;
   for(number = 1;number<100;number = number + 2) //3<100
   {
      printf("%5d", number); // 3
   }
}