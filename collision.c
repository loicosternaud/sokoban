/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** map
*/

#include "sokoban.h"

int collision2(char *map, int i, int direct)
{
    if (map[i] == '#') {
        return (84);
    }
    if (map[i] == 'X') {
        if (box1(map, i, direct) == 84)
            return (84);
    }
}

int collision(char *map, int x, int y, int direct)
{
    int x2 = 0; int y2 = 0; int i = 0; int res = 0;
    while (map[i] != '\0') {
        x2++;
        if (map[i] == '\n') {
            x2 = 0; y2++;
        }
        if (x == x2 && y == y2) {
            (collision2(map, i, direct) == 84) ? (res = 84) : 0;
            break;
        }
        i++;
    }
    return (res);
}
