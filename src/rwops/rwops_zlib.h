/*
 * This software is licensed under the terms of the MIT-License
 * See COPYING for further information.
 * ---
 * Copyright (c) 2011-2018, Lukas Weber <laochailan@web.de>.
 * Copyright (c) 2012-2018, Andrei Alexeyev <akari@alienslab.net>.
 */

#pragma once
#include "taisei.h"

#include <SDL.h>
#include <zlib.h>

SDL_RWops* SDL_RWWrapZReader(SDL_RWops *src, size_t bufsize, bool autoclose);
SDL_RWops* SDL_RWWrapZWriter(SDL_RWops *src, size_t bufsize, bool autoclose);
z_stream* SDL_RWGetZStream(SDL_RWops *src);
