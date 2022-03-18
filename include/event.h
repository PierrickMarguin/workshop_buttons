/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#ifndef EVENT_H_
#define EVENT_H_

#define MAX_EVENT_FUNCTION 10

int event_closed(game_t *game, sfEvent event __attribute__((unused)));
int event_resized(game_t *game, sfEvent event);
int event_mouse_button_pressed(game_t *game, sfEvent event);
int event_mouse_button_released(game_t *game, sfEvent event);
int event_mouse_moved(game_t *game, sfEvent event);

#endif /* EVENT_H_ */
