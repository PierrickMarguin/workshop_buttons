
/*
** EPITECH PROJECT, 2022
** workshop
** File description:
** boutons
*/

#include "game.h"

#include "workshop/include/buttons.h"

#include <stdio.h>

int button_clicked(game_t *game, button_t *button)
{
    (void)game;
    sfRectangleShape_setFillColor(button->rectangle, sfRed);
    return (1);
}

int button_unclicked(game_t *game, button_t *button)
{
    (void)game;
    sfRectangleShape_setFillColor(button->rectangle, sfBlue);
    return (1);
}
