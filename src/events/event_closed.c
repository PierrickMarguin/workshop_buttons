/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "event.h"

int event_closed(game_t *game, sfEvent event __attribute__((unused)))
{
    sfRenderWindow_close(game->window);
    return (1);
}
