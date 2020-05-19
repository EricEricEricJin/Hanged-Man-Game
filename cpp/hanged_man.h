#ifndef _H_M__
#define _H_M__

#define WINDOW_H 24
#define WINDOW_W 80

#define WORD_MAX_LEN 20
#define HINT_MAX_LEN 100

#define LIVES 10

#include <cstdio>
#include <cstdlib>
#include <curses.h>

struct string {
    char* text;
    int len;
};

class hangedMan {
    private:
        WINDOW* main_win;
        WINDOW* man_win;
        WINDOW* IO_win;

        int q_input_stage;
        int hardness;
        string* hint;
        string* word;
        string* answer;

        int stroke;

        
        int restart;

        void draw_man();
        int q_input(int key_val);
        int a_input(int key_val);
        int strcomp(char* s1, char* s2, int len);
        void die();
        void win();
        void del();
        int rst_input(int key_val);
        string* init_str(int len, char chr);
        void free_str(string* str);

    public:
        hangedMan();
        void run();

};
#endif