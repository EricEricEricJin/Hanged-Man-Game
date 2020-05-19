/**
 * Function: del
 * Description: free the allocated memory
 * Parameter: None
 * Return: None
*/

#include "hanged_man.h"

void hangedMan::del() {
    endwin();
    free_str(word);
    free_str(hint);
    free_str(answer);
}