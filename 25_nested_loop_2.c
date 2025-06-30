/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */
#include <stdio.h>
void main()
{
    for(int line=1;line<6;line++)
    {
        for (int astrik = 0; astrik < line; astrik++)
        {
            printf("*");
        }
        printf("\n");
    }
}