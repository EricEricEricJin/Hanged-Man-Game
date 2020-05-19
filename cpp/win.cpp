/**
 * Function: win
 * Description: called after player2 win
 * Parameter: None
 * Return: None
*/

#include "hanged_man.h"

void hangedMan::win() {
    wclear(main_win);
    wmove(main_win, int(LINES / 2), int(COLS / 2) - 5);
    wprintw(main_win, "YOU WIN");
    box(main_win, ACS_VLINE, ACS_HLINE);
    wrefresh(main_win);
}