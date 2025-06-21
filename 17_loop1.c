/* write a program to display THE EASYLEARN 50 times 
   steps 
   --------------------
   1 print "THE EASYLEARN" 1st time 
   repeat step 1 50 times 
*/
#include<stdio.h>
void main()
{
    int count = 1;
    //we must change variable using in loop
    //change can be increment which can be done using + or x 
    //change can be decrement which can be done using - or / 
    while(count<51)
    {
        printf("THE EASYLEARN count = %d \n",count);
        count = count + 1; //50
    }
    printf("Good bye.");
}