// write a program that check a number is arnstrong or not
// 153
// 1. input a number
// 2. store in array
// 3. give power(lenght of number)
// 4. add all values
// 5. check ans is smae to number or not

#include <stdio.h>
void main()
{
    char number[10];
    int number2[3];
    int sum=0;

    printf("enter a number : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%c",&number[i]);
        if(number[i]=='\n'){
            break;
        }
        
    }

    for(int i=0 ;i<3;i++){
        number2[i] = number[i] - '0';
    }


    for(int i=0;i<3;i++){
        number2[i] = number2[i] * number2[i] * number2[i];
    }
    // number2[0] = number2[0] * number2[0] * number2[0];
    // number2[1] = number2[1] * number2[1] * number2[1];
    // number2[2] = number2[2] * number2[2] * number2[2];

    // sum = number2[0]+number2[1]+number2[2];
    for(int i=0;i<3;i++){
        sum = sum+number2[i];
    }

    printf("%d",sum);

    printf("\n%d",sum/100 );
    // printf("\n%d",sum/10 );
    int c = sum/10;
    c=c%10;
    printf("\n%d",c );
    printf("\n%d",sum%10 );

}