/**
 * Function: init
 * Description: initialize as the class is instantiated
 * Parameter: None
 * Return: None
*/

#include "hanged_man.h"

hangedMan::hangedMan() {
    main_win = initscr();
    man_win = subwin(main_win, LINES, int(COLS / 2), 0, int(COLS / 2));
    IO_win = subwin(main_win, LINES, int(COLS / 2), 0, 0);
    // cbreak();
    noecho();
}