/*
 * This software is licensed under the terms of the MIT-License
 * See COPYING for further information.
 * ---
 * Copyright (c) 2011-2017, Lukas Weber <laochailan@web.de>.
 * Copyright (c) 2012-2017, Andrei Alexeyev <akari@alienslab.net>.
 */

#ifndef MAINMENU_H
#define MAINMENU_H

#include "menu.h"

void create_main_menu(MenuData *m);
void draw_main_menu_bg(MenuData *m);
void draw_main_menu(MenuData *m);
void main_menu_update_practice_menus(void);
void draw_loading_screen(void);
void menu_preload(void);

#endif
