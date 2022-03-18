/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"

int game_loop(game_t *game)
{
    while (sfRenderWindow_isOpen(game->window)) {
        if (!handle_event(game))
            return (0);
        if (!draw(game))
            return (0);
    }
    return (1);
}
