/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "destroy.h"

int destroy_window(game_t *game)
{
    if (!game->window)
        return (0);
    sfRenderWindow_destroy(game->window);
    return (1);
}
