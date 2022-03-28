/*
** EPITECH PROJECT, 2022
** Init Home_menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_quit_button(home_menu_t *home)
{
    sfIntRect rect = init_rect(0, 0, 16, 16);
    sfVector2f pos = init_pos(0, 1048);
    sfVector2f scale = init_scale(2, 2);

    home->quit = malloc(sizeof(sfSprite *) * 4);
    home->quit[0] = create_sprite(
        "assets/images/objects/buttons/buttons_1.png", rect, pos, scale);
    home->quit_state = 0;
}

void init_option_button(home_menu_t *home)
{
    sfIntRect rect = init_rect(48, 32, 16, 16);
    sfVector2f pos = init_pos(0, 1048);
    sfVector2f scale = init_scale(2, 2);

    home->options = malloc(sizeof(sfSprite *) * 4);
    home->options[0] = create_sprite(
        "assets/images/objects/buttons/buttons_1.png", rect, pos, scale);
    home->options_state = 0;
}

void init_home_menu(game_t *game)
{
    game->assets->home_menu = malloc(sizeof(home_menu_t));
    init_parallax(game);
    init_quit_button(game->assets->home_menu);
    init_option_button(game->assets->home_menu);
}
