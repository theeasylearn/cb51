// digital clock
#include <stdio.h>
#include <windows.h>

void clock(int s,int m,int h)
{
    int sec = 0, min = 0, hour = 0;

    while (1)
    {
        system("cls");
        printf("\n%02d : %02d : %02d", sec, min, hour);

        Sleep(1000);
        sec++;

        if (sec == 61)
        {
            min++;
            sec=1;
        }

        if (min == 60)
        {
            hour++;
            min=0;
        }

        if(hour==24){
            sec=0;
            min=0;
            hour=0;
        }

        if(sec==s+1 && min==m && hour==h){
            break;
        }
    }
}

void main()
{
    clock(5,0,0);
    // printf("hello");
}