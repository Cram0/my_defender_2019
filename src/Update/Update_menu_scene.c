/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** Update_menu_scene
*/

#include "../../include/my_defender.h"

bool is_hovering(button button, sfRenderWindow *window)
{

}

sfVector2i get_mouse_pos(sfRenderWindow *window)
{
    sfVector2i cursor = sfMouse_getPositionRenderWindow(window);
    printf("X: %d, Y: %d\n", cursor.x, cursor.y);
    return cursor;
}

void button_mouse_interaction(menu_scene *menu_scene)
{

}

void u_menu_scene(menu_scene *menu_scene)
{
    button_mouse_interaction(menu_scene);
}