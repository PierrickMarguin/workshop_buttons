/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "draw.h"

#include "workshop/include/buttons.h"

static int (*draw_tab[])(game_t *) = {draw_background, draw_buttons, NULL};

int draw(game_t *game)
{
    int count = 0;

    if (sfTime_asSeconds(sfClock_getElapsedTime(game->draw_clock)) < 1.0 / 60.0)
        return (1);
    sfRenderWindow_clear(game->window, sfBlack);
    while (draw_tab[count]) {
        draw_tab[count](game);
        count++;
    }
    sfRenderWindow_display(game->window);
    sfClock_restart(game->draw_clock);
    return (1);
}
