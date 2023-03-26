/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** sokoban
*/

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_
    void my_putchar(char c);
    int my_putstr(char const *str);
    char *map_malloc(char *av, int fd, int len, char * map);
    int trouve(char *map, char *temp_map);
    char *my_strcpy(char *dest, char const *src);
    int gagne(char *map);
    int collision2(char *map, int i, int direct);
    int collision(char *map, int x, int y, int direct);
    int box3(char *map, int i, int direct);
    int box2(char *map, int i, int direct, int ligne);
    int box1_suite(char *map, int ligne, int j);
    int box1(char *map, int i, int dir);
    int display_map(char *map, int x, int y, char *temp_map);
#endif /* SOKOBAN_H_ */
