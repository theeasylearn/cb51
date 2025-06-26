/* write a program to make sum of all digits in given amount
   number = 1234 process = 1 + 2 + 3 + 4 output = 10
   steps
   --------------------------------------------------------
   num = 123   reminader = 3   sum = 7

   1    create variable num,sum=0,remainder
   2    accept input in num
   3    store remainder of num % 10 into remainder
   4    add remainder into sum
        sum = sum + remainder
   5    now divide number by 10
        num = num / 10

   6    store remainder of num % 10 into remainder
   7    sum = sum + remainder
   8    num = num / 10
    here we observe that steps 3,4,5 are repeative therefore we do not write steps further

*/
#include <stdio.h>
void main()
{
    int num, sum = 0, remainder;
    printf("enter number");
    scanf("%d", &num); // 1234
    do
    {
        remainder = num % 10; // 4
        sum = sum + remainder;
        num = num / 10; // 123
    } while (num > 0);
    printf("\n sum = %d", sum);
}