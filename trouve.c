/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** map
*/

#include "sokoban.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i;
    i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (i);
}

int trouve(char *map, char *temp_map)
{
    int i = 0; int x = 0; int y = 0;
    while (map[i] != 'P') {
        x++;
        if (map[i] == '\n') {
            x = 0;
            y++;
        }
        i++;
    }
    map[i] = ' ';
    temp_map[i] = ' ';
    display_map(map, x, y, temp_map);
    return (0);
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}

int gagne(char *map)
{
    int i = 0;
    while (map[i] != '\0') {
        if (map[i] == 'O') {
            return (84);
        }
        i++;
    }
    return (0);
}
