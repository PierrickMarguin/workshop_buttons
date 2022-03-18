/*
** EPITECH PROJECT, 2022
** workshop
** File description:
** boutons
*/

#include "game.h"
#include "event.h"

#include "workshop/include/buttons.h"

#define BUTTON_COUNT 3

static int check_button(game_t *game, button_t *button, sfVector2f pos)
{
    if (button->hovered_function && \
        sfFloatRect_contains(&button->hitbox, pos.x, pos.y) &&  \
        !button->is_hovered) {
        button->is_hovered = 1;
        return (button->hovered_function(game, button));
    }
    if (button->unhovered_function && \
        !sfFloatRect_contains(&button->hitbox, pos.x, pos.y) && \
        button->is_hovered) {
        button->is_hovered = 0;
        button->is_clicked = 0;
        return (button->unhovered_function(game, button));
    }
    return (1);
}

int event_button_mouse_moved(game_t *game, sfEvent event)
{
    sfVector2f mapped = sfRenderWindow_mapPixelToCoords(game->window, \
(sfVector2i){event.mouseMove.x, event.mouseMove.y}, game->view);
    int count = 0;

    while (count < BUTTON_COUNT) {
        if (!check_button(game, &game->buttons[count], mapped))
            return (0);
        count++;
    }
    return (1);
}
