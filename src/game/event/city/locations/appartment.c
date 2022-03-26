/*
** EPITECH PROJECT, 2022
** Appartment Location City for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void location_appartment_city(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (check_location_rect(rat->idle_front,
        LOCATION_APPARTMENT, 20, 8) == true && rat->up == 1) {
        game->stage = APPARTMENT_STAGE;
        sfView_setCenter(game->view, VIEW_APPARTMENT_POS);
        sfView_setSize(game->view, VIEW_APPARTMENT_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_APPARTMENT);
        rat->speed = RAT_SPEED_APPARTMENT;
    }
}
