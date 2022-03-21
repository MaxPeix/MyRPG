/*
** EPITECH PROJECT, 2022
** Data Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef DATA_H_
    #define DATA_H_

    #include "csfml.h"

    typedef struct assets {
        sfSprite *cursor;
    } assets_t;

    typedef struct event {
        sfEvent *event;
        sfSound *click;
    } event_t;

    typedef struct game {
        sfRenderWindow *window;
        event_t *event;
        assets_t *assets;
        int stage;
        int last_stage;
        int fps;
        int res;
    } game_t;

#endif /* !DATA_H_ */
