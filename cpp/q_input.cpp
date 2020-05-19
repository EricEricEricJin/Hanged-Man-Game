/**
 * Function: q_input
 * Description: input of question
 * Parameter: key_val
 * Return: 0 not decide or 1 decided
*/

#include "hanged_man.h"

int hangedMan::q_input(int key_val) {
    wclear(main_win);
    box(main_win, ACS_VLINE, ACS_HLINE);
    if (key_val == 9) {
        q_input_stage += 1;
        if (q_input_stage > 3) {
            q_input_stage = 0;
        }
    } else {
        switch (q_input_stage) {
            case 0: // hardness
                switch (key_val) {
                    case 49:
                        hardness = 1;
                        break;
                    case 50:
                        hardness = 2;
                        break;
                    case 51:
                        hardness = 3;
                        break;
                }
                break;
            
            case 1: // word
                if (key_val >= 97 && key_val <= 122) {
                    if (word -> len < WORD_MAX_LEN) {
                        *(word -> text + word -> len) = key_val;
                        word -> len += 1;
                    }
                } else if (key_val == 127) { // delete
                    if (word -> len > 0) {
                        *(word -> text + word -> len - 1) = 0;
                        word -> len -= 1;
                    }
                }
                break;

            case 2: // Hint
                if (key_val >= 97 && key_val <= 122) {
                    if (hint -> len < HINT_MAX_LEN) {
                        *(hint -> text + hint -> len) = key_val;
                        hint -> len += 1;
                    }
                } else if (key_val == 127) { // delete
                    if (hint -> len > 0) {
                        *(hint -> text + hint -> len - 1) = 0;
                        hint -> len -= 1;
                    }
                }
                break;

            case 3:
                if (key_val == 10) {
                    return 1;
                }

            default:
                break;
        }
    }

    // show
    wmove(main_win, 1, 10);
    wprintw(main_win, "Hardness");

    wmove(main_win, 2, 10);
    switch (hardness) {
        case 1:
            wprintw(main_win, "SIMPLE");
            break;
        case 2:
            wprintw(main_win, "MIDDLE");
            break;
        case 3:
            wprintw(main_win, "HARD");
            break;
        default:
            break;
    }
    
    wmove(main_win, 3, 10);
    wprintw(main_win, "Word");

    wmove(main_win, 4, 10);
    wprintw(main_win, word -> text);

    wmove(main_win, 5, 10);
    wprintw(main_win, "Hint");

    wmove(main_win, 6, 10);
    wprintw(main_win, hint -> text);

    wmove(main_win, 7, 10);
    wprintw(main_win, "Finish");

    wmove(main_win, int(q_input_stage * 2 + 1), 1);
    wprintw(main_win, "->");
    return 0;
}