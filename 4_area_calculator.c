/* multiline comment 
   write a program to findout & display area of room using user given length and width
   
   steps
   ---------------------------------------
   1) create variable length, width and area 
   2) accept length from user 
   3) accept width from user 
   4) calculate area using length and width (use formula)
       area = length * width 
   5) display area  
*/
#include<stdio.h>
void main()
{
    float length,width,area; //store
    //output & input
    printf("enter length of room");
    scanf("%f",&length);

    printf("enter width of room");
    scanf("%f",&width);

    //process/expression
    //variable1 = variable2 operator variable3
    area = length * width;

    printf("area = %.2f",area);

}