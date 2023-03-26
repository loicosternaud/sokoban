/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** map
*/

#include "sokoban.h"

int display_map(char *map, int x, int y, char *temp_map)
{
    initscr(); curs_set(FALSE); keypad(stdscr, TRUE); int key;
    int temp_x = x; int temp_y = y;
    while (1) {
        printw(map); mvaddch(y, x, 'P'); refresh(); key = getch(); clear();
        if (key == KEY_UP)
            (collision(map, x + 1, y - 1, 0) == 0) ? y-- : 0;
        if (key == KEY_DOWN)
            (collision(map, x + 1, y + 1, 1) == 0) ? y++ : 0;
        if (key == KEY_RIGHT)
            (collision(map, x + 2, y, 2) == 0) ? x++ : 0;
        if (key == KEY_LEFT)
            (collision(map, x, y, 3) == 0) ? x-- : 0;
        if (key == ' ') {
            my_strcpy(map, temp_map); x = temp_x; y = temp_y;
        }
        if (key == 27) break;
        if (gagne(map) == 0) {
            endwin(); return (0);
        }
    } endwin();
}
