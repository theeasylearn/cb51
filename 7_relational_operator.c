#include<stdio.h>
void main()
{
    //declaration with initialization
    int a = 11;
    int b = 11;

    int result; //if we dont give value while creating variable, it has any random value known garbage value
    //here below printf has 3 placeholder so we must give 3 variable name after " double quote
    printf("a = %d b = %d result = %d",a,b,result);
    //relational/comparision operator
    //expression which relational operator is called relational expression 
    result=a<b; // 10<11
    printf("\n %d = %d<%d",result,a,b);

    result=a>b; // 10>11
    printf("\n %d = %d>%d",result,a,b);

    result=a<=b; // 10<=11
    printf("\n %d = %d<=%d",result,a,b);

    result=a>=b; // 10>=11
    printf("\n %d = %d>=%d",result,a,b);

    result=a==b; // 10==11
    printf("\n %d = %d==%d",result,a,b);

    result=a!=b; // 10!=11
    printf("\n %d = %d!=%d",result,a,b);

}