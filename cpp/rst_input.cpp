/**
 * Function: rst_input
 * Description: get user's restart or quit input after game end
 * Parameter: key_val
 * Return: 0: not decide, 1: decided
*/

#include "hanged_man.h"

int hangedMan::rst_input(int key_val) {
    int rt = 0;
    switch (key_val) {
        case 9:
            restart += 1;
            if (restart > 1) {
                restart = 0;
            }
            rt = 0;
            break;
        case 10:
            rt = 1;
            break;
        default:
            rt = 0;
            break;
    }

    wclear(main_win);
    wmove(main_win, int(LINES / 2) + 5, int(COLS / 2));
    wprintw(main_win, "RESTART");
    wmove(main_win, int(LINES / 2) + 6, int(COLS / 2));
    wprintw(main_win, "QUIT");
    wmove(main_win, int(LINES / 2) + 6 - restart, int(COLS / 2) - 5);
    wprintw(main_win, "-->");
    wrefresh(main_win);

    return rt;
}