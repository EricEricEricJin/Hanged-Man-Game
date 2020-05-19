/**
 * Function: die
 * Description: what to do after die
 * Parameter: None
 * Return: None
*/

#include "hanged_man.h"

void hangedMan::die() {
    wclear(IO_win);
    wmove(IO_win, int(LINES / 2), int(COLS / 4));
    wprintw(IO_win, "YOU DIE!");
    
    stroke = 5;
    draw_man();

    wmove(man_win, 13, 13);
    wvline(man_win, 42, 4);

    
    wmove(man_win, 15, 10);
    whline(man_win, 42, 3);


    wmove(man_win, 15, 13);
    whline(man_win, 42, 4);


    wmove(man_win, 17, 12);
    wvline(man_win, 42, 2);

    wmove(man_win, 17, 14);
    wvline(man_win, 42, 2);
    
    box(IO_win, ACS_VLINE, ACS_HLINE);
    wrefresh(man_win);
    wrefresh(IO_win);
}