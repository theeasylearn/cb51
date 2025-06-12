#include <stdio.h>
void main()
{
    // declaration with initialization
    int a = 10;
    int b = 11;
    int c = 12;
    int result;
    printf("a = %d b = %d c = %d result = %d", a, b, c, result);
    // logical operator
    // expression with logical operator is called logical expression
    result = a < b && b < c; // 1 = 10<11(1) && 11<12(1)
    printf("\n %d = %d<%d && %d<%d", result, a, b, b, c);

    result = a > b && b < c; // 0 = 10>11(0) && 11<12(1)
    printf("\n %d = %d>%d && %d<%d", result, a, b, b, c);

    result = a > b && b > c; // 0 = 10>11(0) && 11>12(0)
    printf("\n %d = %d>%d && %d>%d", result, a, b, b, c);

    result = a > b || b < c; // 0 = 10>11(0) || 11<12(1)
    printf("\n %d = %d>%d || %d<%d", result, a, b, b, c);

    result = a < b || b < c; // 1 = 10<11(1) || 11<12(1)
    printf("\n %d = %d<%d || %d<%d", result, a, b, b, c);

    result = a > b || b > c; // 0 = 10>11(0) || 11>12(0)
    printf("\n %d = %d>%d || %d>%d", result, a, b, b, c);

    result = !(a > b); // !(10 > 11)
    printf("\n %d = !(%d>%d)", result, a, b);
    
    result = !(a < b); // !(10 < 11)
    printf("\n %d = !(%d<%d)", result, a, b);

    
}