/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "event.h"

int event_resized(game_t *game, sfEvent event)
{
    sfFloatRect port = {0, 0, 1, 1};
    sfVector2f size = (sfVector2f){event.size.width, event.size.height};

    if ((float)event.size.width / (float)event.size.height > 1920.0 / 1080.0) {
        size.x = (size.y * 1920) / 1080;
        port.left = ((event.size.width - size.x) / 2) / event.size.width;
        port.width = size.x / event.size.width;
    } else {
        size.y = (size.x * 1080) / 1920;
        port.top = ((event.size.height - size.y) / 2) / event.size.height;
        port.height = size.y / event.size.height;
    }
    sfView_setViewport(game->view, port);
    sfRenderWindow_setView(game->window, game->view);
    return (1);
}
