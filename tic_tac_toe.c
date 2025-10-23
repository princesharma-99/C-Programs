#include <stdio.h>

char board[9];

void initBoard()
{
    for(int i=0;i<9;i++)
    board[i] = '1'+i;
}

void printBoard()
{
    printf("\n %c | %c | %c\n---+---+---\n %c | %c | %c\n---+---+---\n %c | %c | %c\n",board[0],board[1],board[2],board[3],board[4],board[5],board[6],board[7],board[8]);
}
int checkWin()
{
    int wins[8][3] = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
    for(int i=0;i<8;i++)
    {
        if(board[wins[i][0]]==board[wins[i][1]] && board[wins[i][1]]==board[wins[i][2]])
            return 1;
    }
    return 0;
}
int fullBoard()
{
    for(int i=0;i<9;i++)
    if(board[i]<'X')
    return 0;
    return 1; 
}

int main()
{
    int pos; char player='X';
    initBoard();
    while(1)
    {
        printBoard();
        printf("Player %c, enter position (1-9): ", player);
        if(scanf("%d",&pos)!=1)
        break;
        if(pos<1||pos>9 || board[pos-1]>'9')
        {
            printf("Invalid move\n"); continue;
        }
        board[pos-1] = player;
        if(checkWin())
        {
            printBoard();
            printf("Player %c wins!\n", player);
            break;
        }
        if(fullBoard())
        {
            printBoard();
            printf("Match Drawn.\n");
            break;
        }
        player = (player=='X') ? 'O' : 'X';
    }
    return 0;
}