/*
** EPITECH PROJECT, 2022
** Ice Cream Key Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void museum2_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    museum2_locations(game);
}
