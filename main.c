#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <unistd.h>
#include "filereader.h"
#include "controller.h"

#define SLEEP_TIME 3000000


int main(void){
    char board[36] = {' ',
                      ' ','|',' ','|',' ',
                      '_','|','_','|','_',
                      ' ','|',' ','|',' ',
                      '_','|','_','|','_',
                      ' ','|',' ','|',' '};
    

    filereader("./tic_tac_toe.txt");
    usleep(SLEEP_TIME);
    int won = 0;
    int selectedTo = -1;
    int tac = -1;
    while (1)
    {
            usleep(28000);
            system("cls");
            controller(&selectedTo, &tac);
            for(int i = 0; i < sizeof board; i++){
                if(i % 5 == 0 )
                    printf(" %c\n ",board[i]);
                else
                    printf(" %c ",board[i]);
                if(selectedTo == i && i != 0)
                    board[i] = 'X';
                if(tac == i &&  board[i] != 'X' && i != 0)
                    board[i] = 'O';
            }
            if(board[1] == 'X' && board[3] == 'X' && board[5] == 'X'){
                won = 1;
                break;
            }
            if(board[11] == 'X' && board[13] == 'X' && board[15] == 'X'){
                won = 1;
                break;
            }
            if(board[21] == 'X' && board[23] == 'X' && board[25] == 'X'){
                won = 1;
                break;
            }
            if(board[1] == 'X' && board[11] == 'X' && board[21] == 'X'){
                won = 1;
                break;
            }
            if(board[3] == 'X' && board[13] == 'X' && board[23] == 'X'){
                won = 1;
                break;
            }
            if(board[5] == 'X' && board[15] == 'X' && board[25] == 'X'){
                won = 1;
                break;
            }
            if(board[1] == 'X' && board[13] == 'X' && board[25] == 'X'){
                won = 1;
                break;
            }
            if(board[5] == 'X' && board[13] == 'X' && board[21] == 'X'){
                won = 1;
                break;
            }


            if(board[1] == 'O' && board[3] == 'O' && board[5] == 'O'){
                break;
            }
            if(board[11] == 'O' && board[13] == 'O' && board[15] == 'O'){
                break;
            }
            if(board[21] == 'O' && board[23] == 'O' && board[25] == 'O'){
                break;
            }
            if(board[1] == 'O' && board[11] == 'O' && board[21] == 'O'){
                break;
            }
            if(board[3] == 'O' && board[13] == 'O' && board[23] == 'O'){
                break;
            }
            if(board[5] == 'O' && board[15] == 'O' && board[25] == 'O'){
                break;
            }
            if(board[1] == 'O' && board[13] == 'O' && board[25] == 'O'){
                break;
            }
            if(board[5] == 'O' && board[13] == 'O' && board[21] == 'O'){
                break;
            }
                
    }
    if(won){
        filereader("./youwon.txt");
        usleep(SLEEP_TIME);
    }
    else{
        filereader("./youlost.txt");
        usleep(SLEEP_TIME);
    }

    return 0;
}