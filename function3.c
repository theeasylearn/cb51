// write a function that take 2 args(number) and print tables
// 2 -5
// with argument without return
#include <stdio.h>

void printtable(int s,int e){
    for (int j = s; j <= e; j++)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("\n%d x %d = %d", j, i, j * i);
        }

        printf("\n");
    }
}

void main()
{

    printtable(11,15);
    printtable(5,1);
}