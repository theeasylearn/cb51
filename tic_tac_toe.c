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

int checkwinner(char board[9],char sign){
    if(board[0]==sign && board[1]==sign && board[2]==sign){
        return 1;
    }
    else if (board[3]==sign && board[4]==sign && board[5]==sign)
    {
        return 1;
    }
    else if (board[6]==sign && board[7]==sign && board[8]==sign)
    {
        return 1;
    }
    else if (board[0]==sign && board[3]==sign && board[6]==sign)
    {
        return 1;
    }
    else if (board[1]==sign && board[4]==sign && board[7]==sign)
    {
        return 1;
    }
    else if (board[2]==sign && board[5]==sign && board[8]==sign)
    {
        return 1;
    }
    else if (board[0]==sign && board[4]==sign && board[8]==sign)
    {
        return 1;
    }
    else if (board[2]==sign && board[4]==sign && board[6]==sign)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

void main()
{
    char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char sign = 'X';
    int move;
    int n = 1;

    printboard(board);
    while(1)
    {
        printf("\nenter your move(0-8) for player%d : ",n);
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

            if(n==1){
                n=2;
            }
            else if (n==2)
            {
                n=1;
            }
            
        }
        printboard(board);

        if(checkwinner(board,'X') == 1){
            printf("\nplayer 2 is winner");
            break;
        }
        
        if(checkwinner(board,'O')==1){
            printf("\nplayer 1 is winner");
            break;
        }

        if(board[0]!=' ' && board[1]!=' ' && board[2]!=' ' && board[3]!=' ' && board[4]!=' ' && board[5]!=' ' && board[6]!=' ' && board[7]!=' ' && board[8]!=' ' ){
            printf("\ndraw!!!");
            break;
        }

     
    }
}