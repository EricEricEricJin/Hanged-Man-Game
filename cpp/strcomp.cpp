/**
 * Function: strcomp
 * Description: use to compare two string which have same length
 * Parameter: string1, string2, length
 * Return: 0 not smae or 1 same
*/

#include "hanged_man.h"

int hangedMan::strcomp(char* s1, char* s2, int len) {
    int same = 1;
    for (int i = 0; i < len; i++) {
        if (*(s1 + i) != *(s2 + i)) {
            same = 0;
        }
    }
    return same;
}