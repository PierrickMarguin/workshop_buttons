/*
** EPITECH PROJECT, 2021
** workshop
** File description:
** boutons
*/

#include "game.h"
#include "draw.h"

#include "workshop/include/buttons.h"

#define BUTTON_COUNT 3

#include <stdlib.h>

int draw_buttons(game_t *game)
{
    int count = 0;

    while (count < BUTTON_COUNT) {
        sfRenderWindow_drawRectangleShape(game->window, game->buttons[count].rectangle, NULL);
        count++;
    }
    (void)game;
    return (1);
}
