/*
** EPITECH PROJECT, 2022
** Appartment Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void appartment_stage(game_t *game)
{
    appartment_t *apart = game->assets->appartment;

    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_menu);
    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    sfRenderWindow_drawSprite(game->window, apart->bg, NULL);
    display_appartment(game);
    display_rat(game);
    sfRenderWindow_drawSprite(game->window, apart->bg_top, NULL);
    if (apart->is_saving == 1) {
        sfRenderWindow_drawSprite(game->window, apart->sign, NULL);
        sfRenderWindow_drawText(game->window, apart->press_interact, NULL);
    }
    check_rat_key_pressed(game);
}
