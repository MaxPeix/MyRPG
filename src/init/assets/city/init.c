/*
** EPITECH PROJECT, 2022
** Init city for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void init_city(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 3000, 2000);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->city = malloc(sizeof(city_t));
    game->assets->city->doors = malloc(sizeof(doors_t));
    game->assets->city->bg = create_sprite(CITY, rect, pos, scale);
    game->assets->city->hitbox = create_image(CITY_HITBOX);
    init_doors(game);
}
