/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "draw.h"

int draw_background(game_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->background, NULL);
    return (1);
}
