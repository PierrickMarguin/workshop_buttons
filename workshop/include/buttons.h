/*
** EPITECH PROJECT, 2022
** workshop
** File description:
** boutons
*/

#ifndef BUTTON_H_
#define BUTTON_H_

#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Network.h>
#include <SFML/Graphics.h>
#include <stdint.h>

// tkt
typedef struct game_s game_t;
typedef struct button_s button_t;

// definition du type pour les fonctions d'interractions du bouton
typedef int (*button_function)(game_t *, button_t *);

// structure du bouton
typedef struct button_s {
    sfRectangleShape *rectangle;
    sfFloatRect hitbox;
    int8_t is_hovered;
    int8_t is_clicked;
    button_function hovered_function;
    button_function unhovered_function;
    button_function clicked_function;
    button_function unclicked_function;
} button_t;

// fonction appellée une fois au début du programme pour initialiser les boutons
int create_buttons(game_t *game);

// fonction appellée une fois à la fin du programme pour détruire les variables
int destroy_buttons(game_t *game);

// fonction appellée à chaque tick pour afficher les boutons
int draw_buttons(game_t *game);

// fonction appellée avec l'evenement sfEvtMouseMoved
int event_button_mouse_moved(game_t *game, sfEvent event);

// fonction appellée avec l'evenement sfEvtMousePressed
int event_button_mouse_pressed(game_t *game, sfEvent event);

// fonction appellée avec l'evenement sfEvtMouseReleased
int event_button_mouse_released(game_t *game, sfEvent event);

int button_hovered(game_t *game, button_t *button);
int button_unhovered(game_t *game, button_t *button);
int button_clicked(game_t *game, button_t *button);
int button_unclicked(game_t *game, button_t *button);


#endif /* BUTTON_H_ */
