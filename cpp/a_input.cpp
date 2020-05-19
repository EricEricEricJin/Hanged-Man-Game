/**
 * Function: a_input
 * Description: the player input the answer
 * Parameter: key_val
 * Return: die(-1) or win(1) or unfinished(0)
*/

#include "hanged_man.h"

int hangedMan::a_input(int key_val) {
    if (key_val != 0) {
        int hasCorrect = 0;
        for (int i = 0; i < word -> len; i++) {
            if (*(word -> text + i) == key_val) {
                hasCorrect = 1;
                *(answer -> text + i) = key_val;
            }
        }
        
        if (hasCorrect == 0) {
            stroke += 1;
        }
    }
    wclear(IO_win);
    box(IO_win, ACS_VLINE, ACS_HLINE);
    wmove(IO_win, int(LINES / 2), 5);
    wprintw(IO_win, answer -> text);
    wmove(IO_win, int(LINES / 2) + 2, 5);
    wprintw(IO_win, "Hint:");
    wmove(IO_win, int(LINES / 2) + 3, 5);
    wprintw(IO_win, hint -> text);
    wrefresh(IO_win);
    draw_man();
    
    if (stroke >= 10) {
        // dead
        return -1;
    } else if (strcomp(answer -> text, word -> text, word -> len) == 1) {
        return 1;
    }
    return 0;
}