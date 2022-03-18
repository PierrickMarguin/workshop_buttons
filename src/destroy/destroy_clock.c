/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "destroy.h"

int destroy_clock(game_t *game)
{
    if (!game->draw_clock)
        return (0);
    sfClock_destroy(game->draw_clock);
    return (1);
}
