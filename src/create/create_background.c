/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "create.h"

int create_background(game_t *game)
{
    game->background_texture = sfTexture_createFromFile( \
"assets/seacare.png", NULL);
    if (!game->background_texture)
        return (0);
    game->background = sfSprite_create();
    if (!game->background)
        return (0);
    sfSprite_setTexture(game->background, game->background_texture, sfFalse);
    return (1);
}
