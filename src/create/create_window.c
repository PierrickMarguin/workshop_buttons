/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "create.h"

int create_window(game_t *game)
{
    sfVideoMode mode = {800, 600, 32};

    game->window = sfRenderWindow_create(mode, "game", \
sfClose | sfResize, NULL);
    if (!game->window)
        return (0);
    sfRenderWindow_setFramerateLimit(game->window, 30);
    return (1);
}
