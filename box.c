/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** map
*/

#include "sokoban.h"

int box3(char *map, int i, int direct)
{
    if (direct == 2) {
        if (map[i + 1] != '#' && map[i + 1] != 'X') {
            map[i] = ' '; map[i + 1] = 'X';
            return (0);
        }
    }
    if (direct == 3) {
        if (map[i - 1] != '#' && map[i - 1] != 'X') {
            map[i] = ' '; map[i - 1] = 'X';
            return (0);
        }
    }
    return (84);
}

int box2(char *map, int i, int direct, int ligne)
{
    if (direct == 0) {
        if (map[i - ligne] != '#' && map[i - ligne] != 'X') {
            map[i] = ' '; map[i - ligne] = 'X';
            return (0);
        }
    }
    if (direct == 1) {
        if (map[i + ligne] != '#' && map[i + ligne] != 'X') {
            map[i] = ' '; map[i + ligne] = 'X';
            return (0);
        }
    }
    return (84);
}

int box1_suite(char *map, int ligne, int j)
{
    while (map[j] != '\n') {
        ligne++;
        j++;
    }
    return (ligne);
}

int box1(char *map, int i, int direct)
{
    int ligne;
    int j = i;
    while (map[j] != '\n') {
        j--;
        if (map[j - 1] == '\n') {
            ligne = 1;
            ligne = box1_suite(map, ligne, j);
            break;
        }
    }
    if (box2(map, i, direct, ligne) == 0)
        return (0);
    if (box3(map, i, direct) == 0)
        return (0);
    return (84);
}
