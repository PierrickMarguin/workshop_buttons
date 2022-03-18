/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"

int main(int argc __attribute__((unused)), \
char const * const *argv __attribute__((unused)), char const * const *env)
{
    game_t game;
    int exit_status;

    if (!env || !(*env))
        return (84);
    if (!create_struct(&game))
        return (84);
    if (game_loop(&game))
        exit_status = 0;
    else
        exit_status = 84;
    destroy_struct(&game);
    return (exit_status);
}
