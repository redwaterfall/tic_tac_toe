#include "controller.h"
void controller(int *number, int *tac){
    if(kbhit()){
        char keyPressed = getch();
        if(keyPressed == '1'){
            *number  = 1;
        }
        if(keyPressed == '2'){
            *number  = 3;
        }
        if(keyPressed == '3'){
            *number  = 5;
        }
        if(keyPressed == '4'){
            *number  = 11;
        }
        if(keyPressed == '5'){
            *number  = 13;
        }
        if(keyPressed == '6'){
            *number  = 15;
        }
        if(keyPressed == '7'){
            *number  = 21;
        }
        if(keyPressed == '8'){
            *number  = 23;
        }
        if(keyPressed == '9'){
            *number  = 25;
        }
       
        int i;
        int table[] = {1,3,5,11,13,15,21,23,25};
        randomLable:
        i = rand() % sizeof table + 1;
        if(table[i+1] == *number)
            goto randomLable;
        *tac = table[i+1];

    }
}