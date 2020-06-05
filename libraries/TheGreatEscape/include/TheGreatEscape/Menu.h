/**
 * Menu.h
 *
 * This file is part of "The Great Escape in C".
 *
 * This project recreates the 48K ZX Spectrum version of the prison escape
 * game "The Great Escape" in portable C code. It is free software provided
 * without warranty in the interests of education and software preservation.
 *
 * "The Great Escape" was created by Denton Designs and published in 1986 by
 * Ocean Software Limited.
 *
 * The original game is copyright (c) 1986 Ocean Software Ltd.
 * The original game design is copyright (c) 1986 Denton Designs Ltd.
 * The recreated version is copyright (c) 2012-2019 David Thomas
 */

#ifndef MENU_H
#define MENU_H

/* ----------------------------------------------------------------------- */

#include "ZXSpectrum/Spectrum.h"

#include "TheGreatEscape/State.h"

/* ----------------------------------------------------------------------- */

void set_menu_item_attributes(tgestate_t *state,
                              int         index,
                              attribute_t attrs);

int menu_screen(tgestate_t *state);

/* ----------------------------------------------------------------------- */

#endif /* MENU_H */

// vim: ts=8 sts=2 sw=2 et
