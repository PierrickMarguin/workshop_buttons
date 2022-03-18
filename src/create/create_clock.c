/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "create.h"

int create_clock(game_t *game)
{
    game->draw_clock = sfClock_create();
    if (!game->draw_clock)
        return (0);
    return (1);
}
