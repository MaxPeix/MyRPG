/*
** EPITECH PROJECT, 2022
** Init Parallax for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_parallax(game_t *game)
{
    home_menu_t *menu = game->assets->home_menu;
    sfIntRect rect = init_rect(0, 0, 320, 180);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(2, 2);

    menu->parallax = malloc(sizeof(parallax_t));
    menu->parallax->bg0 = create_sprite(
        "assets/images/menus/home/bg0.png", rect, pos, scale);
    menu->parallax->bg1 = create_sprite(
        "assets/images/menus/home/bg1.png", rect, pos, scale);
    menu->parallax->bg2 = create_sprite(
        "assets/images/menus/home/bg2.png", rect, pos, scale);
    menu->parallax->bg3 = create_sprite(
        "assets/images/menus/home/bg3.png", rect, pos, scale);
    menu->parallax->clock = sfClock_create();
}
