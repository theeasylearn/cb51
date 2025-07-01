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
  int space = 1, line = 5,limit=1;

  do
  {
    // 1st inner while loop
    while (space < line)
    {
      printf(" ");
      space++;
    }
    for (int astrik=0; astrik < limit; astrik++)
    {
      printf("* ");
    }
    limit++;
    space = 1;
    printf("\n");
    line--; // 3
  } while (line > 0);
}