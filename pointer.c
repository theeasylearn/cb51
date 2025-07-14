#include<stdio.h>
void main()
{
    int a = 10;
    int *p = &a ;

    printf("\n%d",a);
    printf("\n%d",&a);
    printf("\n%d",p);
    printf("\n%d",&p);
}