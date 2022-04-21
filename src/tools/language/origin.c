/*
** EPITECH PROJECT, 2022
** Language Origin Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_origin_controls(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    set_text_origin(s_controls->choose_key->text);
    set_text_origin(s_controls->choose_key->quit);
    set_text_origin_middle_left(s_controls->keys[UP]->title);
    set_text_origin_middle_left(s_controls->keys[DOWN]->title);
    set_text_origin_middle_left(s_controls->keys[LEFT]->title);
    set_text_origin_middle_left(s_controls->keys[RIGHT]->title);
    set_text_origin_middle_left(s_controls->keys[JUMP]->title);
    set_text_origin_middle_left(s_controls->keys[DODGE]->title);
    set_text_origin_middle_left(s_controls->keys[ATTACK]->title);
    set_text_origin_middle_left(s_controls->keys[INTERACT]->title);
    set_text_origin_middle_left(s_controls->keys[ZOOM_IN]->title);
    set_text_origin_middle_left(s_controls->keys[ZOOM_OUT]->title);
    set_text_origin_middle_left(s_controls->keys[ROTATE_LEFT]->title);
    set_text_origin_middle_left(s_controls->keys[ROTATE_RIGHT]->title);
    set_text_origin_middle_left(s_controls->keys[RESET_VIEW]->title);
    set_text_origin_middle_left(s_controls->keys[ESCAPE]->title);
}

void set_texts_origin_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;

    set_text_origin_middle_left(settings->settings_text);
    set_text_origin_middle_left(settings->game_text);
    set_text_origin_middle_left(settings->game->title_language);
    set_text_origin(settings->game->language);
    set_text_origin_middle_left(settings->graphics_text);
    set_text_origin_middle_left(settings->graphics->title_res);
    set_text_origin_middle_left(settings->graphics->title_fps);
    set_text_origin(settings->graphics->fps[4]);
    set_text_origin_middle_left(settings->graphics->title_vsync);
    set_text_origin_middle_left(settings->audio_text);
    set_text_origin_middle_left(settings->audio->title_music);
    set_text_origin_middle_left(settings->audio->title_effects);
    set_text_origin_middle_left(settings->controls_text);
}

void set_texts_origin(game_t *game)
{
    set_text_origin(game->assets->top_bar->game);
    set_text_origin(game->assets->top_bar->abilities);
    set_text_origin(game->assets->top_bar->stats);
    set_text_origin(game->assets->top_bar->howtoplay);
    set_text_origin(game->assets->home_menu->press);
    set_texts_origin_abilities(game);
    set_texts_origin_settings(game);
    set_texts_origin_controls(game);
}
