// tic tac toe
// steps
// 1) print board
// print(" 0 | 1 | 2 ")
// print("---+---+---")
// print(" 3 | 4 | 5 ")
// print("---+---+---")
// print(" 6 | 7 | 8 ")

#include <stdio.h>

void printboard(char board[9])
{
    printf("\n %c | %c | %c ", board[0], board[1], board[2]);
    printf("\n---+---+---");
    printf("\n %c | %c | %c ", board[3], board[4], board[5]);
    printf("\n---+---+---");
    printf("\n %c | %c | %c ", board[6], board[7], board[8]);
}
void main()
{
    char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char sign = 'X';
    int move;

    printboard(board);
    for(int i=1;i<=9;i++)
    {
        printf("\nenter your move(0-8) : ");
        scanf("%d", &move);

        if (board[move] == ' ')
        {
            if (sign == 'X')
            {
                sign = 'O';
            }
            else if (sign == 'O')
            {
                sign = 'X';
            }
            board[move] = sign;
        }
        printboard(board);


        if(i==9){
            break;
        }
    }
}