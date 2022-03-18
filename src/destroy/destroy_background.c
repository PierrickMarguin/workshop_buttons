/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "destroy.h"

int destroy_background(game_t *game)
{
    if (!game->background_texture)
        return (0);
    sfTexture_destroy(game->background_texture);
    if (!game->background)
        return (0);
    sfSprite_destroy(game->background);
    return (1);
}
