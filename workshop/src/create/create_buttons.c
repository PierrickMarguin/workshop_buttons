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

static const button_function interactions[BUTTON_COUNT][4] = { \
    {button_hovered, button_unhovered, button_clicked, button_unclicked}, \
    {button_hovered, button_unhovered, button_clicked, button_unclicked}, \
    {button_hovered, button_unhovered, button_clicked, button_unclicked} \
};

static const sfFloatRect button_hitbox[3] = {
    {100, 800, 300, 100}, \
    {810, 800, 300, 100}, \
    {1520, 800, 300, 100} \
};

int create_this_button(button_t *button, \
                       button_function const *functions, sfFloatRect box)
{
    button->rectangle = sfRectangleShape_create();
    if (!button->rectangle)
        return (0);
    sfRectangleShape_setPosition(button->rectangle, \
                                 (sfVector2f){box.left, box.top});
    sfRectangleShape_setSize(button->rectangle, \
                             (sfVector2f){box.width, box.height});
    sfRectangleShape_setFillColor(button->rectangle, sfGreen);
    button->hovered_function = functions[0];
    button->unhovered_function = functions[1];
    button->clicked_function = functions[2];
    button->unclicked_function = functions[3];
    button->hitbox = box;
    return (1);
}

// retourne 1 si pas de probleme, retourne 0 si probleme
// game->buttons (button_t *) est le pointeur dedie aux boutons
int create_buttons(game_t *game)
{
    int count = 0;

    game->buttons = malloc(sizeof(button_t) * BUTTON_COUNT);
    if (!game->buttons)
        return (0);
    while (count < BUTTON_COUNT) {
        if (!create_this_button(&game->buttons[count], \
                               interactions[count], button_hitbox[count]))
            return (0);
        game->buttons[count].is_hovered = 0;
        game->buttons[count].is_clicked = 0;
        count++;
    }
    return (1);
}
