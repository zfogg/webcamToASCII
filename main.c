#include <curses.h>
#include <stdlib.h>

#include "main.h"


WINDOW * win;

int main() {
    handleInput();
    return 1;
}

void handleInput() {
    initscr();
    noecho();
    cbreak();
    nodelay(stdscr, TRUE);
    //keypad(stdscr, TRUE);

    int y, x;
    getmaxyx(stdscr, y, x);
    //win = newwin(y, x, 0, 0);

    for (int ch; ; ch = getch()) {
        if (ch == ERR) { // No input :(.
            ;
        } else {         // Input from stdin :).
            if (ch == 9) { // ch == '\t'
                //wclear(win);
                move(0, 0);
            } else {
                addch(ch);
            }
            refresh();
        }
    }

    endwin();
}

