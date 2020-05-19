#include "hanged_man.h"

/**
 * Function: init_str
 * Description: initizlize a string structure
 * Parameter: string max length, initialize character
 * Return: string* of the string.
*/
string* hangedMan::init_str(int len, char chr) {
    string* str;
    str = (string*)malloc(sizeof(string));
    str -> text = (char*)malloc(sizeof(char) * len);
    for (int i = 0; i < len; i++) {
        *(str -> text + i) = chr;
    }
    str -> len = 0;
    return str;
}

/**
 * Function: free_str
 * Description: free the string structure
 * Parameter: string* string
 * Return: None
*/
void hangedMan::free_str(string* str) {
    free(str -> text);
    free(str);
}