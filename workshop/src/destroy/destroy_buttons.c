/*
** EPITECH PROJECT, 2022
** workshop
** File description:
** boutons
*/

#include <stdlib.h>

#include "game.h"
#include "create.h"

#include "workshop/include/buttons.h"

#define BUTTON_COUNT 3

int destroy_buttons(game_t *game)
{
    int count = 0;

    if (game->buttons) {
        while (count < BUTTON_COUNT && game->buttons[count].rectangle) {
            sfRectangleShape_destroy(game->buttons[count].rectangle);
            count++;
        }
        free(game->buttons);
        return (1);
    }
    return (0);
}
