/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "event.h"

int event_mouse_moved(game_t *game, sfEvent event)
{
    sfVector2f mapped = sfRenderWindow_mapPixelToCoords(game->window, \
(sfVector2i){event.mouseMove.x, event.mouseMove.y}, game->view);

    game->mouse.x = event.mouseMove.x;
    game->mouse.y = event.mouseMove.y;
    game->mouse.mapped_x = mapped.x;
    game->mouse.mapped_y = mapped.y;
    return (1);
}
