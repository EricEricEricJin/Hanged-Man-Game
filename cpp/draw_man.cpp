/**
 * Function: draw_man
 * Description: draw the man
 * Parameter: None
 * Return: None
*/

#include "hanged_man.h"

void hangedMan::draw_man() {
    wclear(man_win);
    box(man_win, ACS_VLINE, ACS_HLINE);
    // wprintw(man_win, "%d", stroke);
    int counter = 0;
    if (counter >= stroke) {
        wrefresh(man_win);
        return;
    }

    wmove(man_win, LINES - 5, 5);
    whline(man_win, 42, 10);

    counter += 1;
    if (counter >= stroke) {
        wrefresh(man_win);
        return;
    }
    
    wmove(man_win, 5, 5);
    wvline(man_win, 42, (LINES - 10));

    counter += 1;
    if (counter >= stroke) {
        wrefresh(man_win);
        return;
    }

    whline(man_win, 42, 8);

    counter += 1;
    if (counter >= stroke) {
        wrefresh(man_win);
        return;
    }

    wmove(man_win, 5, 13);
    wvline(man_win, 42, 4);

    counter += 1;
    if (counter >= stroke) {
        wrefresh(man_win);
        return;
    }

    wmove(man_win, 7, 12);
    whline(man_win, 42, 3);
    wvline(man_win, 42, 3);
    wmove(man_win, 9, 12);
    whline(man_win, 42, 3);
    wmove(man_win, 7, 14);
    wvline(man_win, 42, 3);


    counter += 1;
    if (counter >= stroke) {
        wrefresh(man_win);
        return;
    }

    wmove(man_win, 8, 13);
    wvline(man_win, 42, 4);


    counter += 1;
    if (counter >= stroke) {
        wrefresh(man_win);
        return;
    }
    
    wmove(man_win, 10, 10);
    whline(man_win, 42, 3);

    counter += 1;
    if (counter >= stroke) {
        wrefresh(man_win);
        return;
    }

    wmove(man_win, 10, 13);
    whline(man_win, 42, 4);

    counter += 1;
    if (counter >= stroke) {
        wrefresh(man_win);
        return;
    }

    wmove(man_win, 12, 12);
    wvline(man_win, 42, 2);

    counter += 1;
    if (counter >= stroke) {
        wrefresh(man_win);
        return;
    }

    wmove(man_win, 12, 14);
    wvline(man_win, 42, 2);
    counter += 1;
    if (counter >= stroke) {
        wrefresh(man_win);
        return;
    }
}