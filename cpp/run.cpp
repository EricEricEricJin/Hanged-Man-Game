/**
 * Function: run
 * Description: the main loop of the game
 * Parameter: None
 * Return: None
*/

#include "hanged_man.h"

void hangedMan::run() {
    word = init_str(WORD_MAX_LEN, 0);
    hint = init_str(HINT_MAX_LEN, 0);
    q_input_stage = 0;
    hardness = 0;
    stroke = 0;
    restart = 0;
    
    wclear(main_win);
    wclear(man_win);
    wclear(IO_win);

    box(main_win, ACS_VLINE, ACS_HLINE);

    int key_val = 0;
    q_input_stage = 0;
    while (1) {
        
        if (q_input(key_val) == 1) {
            break;
        }
        key_val = getch();
    }
    
    wclear(main_win);
    box(main_win, ACS_VLINE, ACS_HLINE);
    box(man_win, ACS_VLINE, ACS_HLINE);
    box(IO_win, ACS_VLINE, ACS_HLINE);

    stroke += hardness - 1;
    answer = init_str(word -> len, 95);

    wprintw(IO_win, answer -> text);
    key_val = 0;

    int brk = 0;
    while (1) {
        if (brk == 1) {
            break;
        }
        switch (a_input(key_val)) {
            case 1:
                win();
                brk = 1;
                break;
            case -1:
                brk = 1;
                die();
                break;
            default:
                key_val = getch();
                break;
        }
    }

    // restart or quit
    getch();
    key_val = 0;
    restart = 0;
    while (1) {
        if (rst_input(key_val) == 1) {
            if (restart == 0) {
                del();
            } else if (restart == 1) {
                del();
                run();
            }
            break;
        }
        key_val = getch();
    }
}