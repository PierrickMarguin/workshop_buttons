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

static int check_button(game_t *game, button_t *button)
{
    (void)game;
    (void)button;
    if (button->is_hovered) {
        button->is_clicked = 0;
        return (button->unclicked_function(game, button)); 
    }
    return (1);
}

int event_button_mouse_released(game_t *game, sfEvent event)
{
    int count = 0;

    (void)event;
    while (count < BUTTON_COUNT) {
        if (!check_button(game, &game->buttons[count]))
            return (0);
        count++;
    }
    return (1);
}
