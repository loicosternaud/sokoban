/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** main
*/

#include "sokoban.h"

char *map_malloc(char *av, int fd, int len, char * map)
{
    close(fd);
    fd = open(av, O_RDWR);
    read(fd, map, len);
    return (map);
}

int main(int ac, char **av)
{
    if (ac != 2) return 84;
    if (av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("USAGE\n\t./my_sokoban map\nDESCRIPTION\nthe warehouse map");
        my_putstr(", containing '#' for walls,\n\t\t'P' for the player, 'X' ");
        my_putstr("for boxes and 'O' for storage locations.\n");
        return (0);
    }
    int fd = open(av[1], O_RDONLY); char buffer[1]; int len = 0; int i = 1;
    while (i != 0) {
        i = read(fd, buffer, 1); len++;
    }
    char *map = malloc(sizeof(char) * 10000);
    char *temp_map = malloc(sizeof(char) * 10000);
    map_malloc(av[1], fd, len, map); map_malloc(av[1], fd, len,temp_map);
    trouve(map, temp_map); free(map); free(temp_map);
    return (0);
}
