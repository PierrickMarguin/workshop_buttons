
/*
** EPITECH PROJECT, 2022
** workshop
** File description:
** boutons
*/

#include "game.h"

#include "workshop/include/buttons.h"

#include <stdio.h>

int button_hovered(game_t *game, button_t *button)
{
    (void)game;
    sfRectangleShape_setFillColor(button->rectangle, sfBlue);
    return (1);
}

int button_unhovered(game_t *game, button_t *button)
{
    (void)game;
    sfRectangleShape_setFillColor(button->rectangle, sfGreen);
    return (1);
}
