/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "create.h"

int create_view(game_t *game)
{
    sfFloatRect rect = {0, 0, 1920, 1080};

    game->view = sfView_createFromRect(rect);
    return (!(!game->view));
}
