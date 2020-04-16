/* --------------------------------------------------------------------------
 *    Name: zxgame.h
 * Purpose: ZX game handling
 *  Author: David Thomas
 * ----------------------------------------------------------------------- */

#ifndef ZXGAME_H
#define ZXGAME_H

#include "appengine/base/errors.h"

typedef struct zxgame zxgame_t;

error zxgame_init(void);
void zxgame_fin(void);

error zxgame_create(zxgame_t **zxgame);
void zxgame_destroy(zxgame_t *zxgame);

int zxgame_get_scale(zxgame_t *zxgame);
void zxgame_set_scale(zxgame_t *zxgame, int scale);

void zxgame_open(zxgame_t *zxgame);

enum
{
  zxgame_UPDATE_COLOURS = 1 << 0,
  zxgame_UPDATE_SCALING = 1 << 1,
  zxgame_UPDATE_EXTENT  = 1 << 2,
  zxgame_UPDATE_REDRAW  = 1 << 3,

  zxgame_UPDATE_ALL     = zxgame_UPDATE_COLOURS |
                          zxgame_UPDATE_SCALING |
                          zxgame_UPDATE_EXTENT  |
                          zxgame_UPDATE_REDRAW
};

typedef unsigned int zxgame_update_flags;

void zxgame_update(zxgame_t *zxgame, zxgame_update_flags flags);

#endif /* ZXGAME_H */

// vim: ts=8 sts=2 sw=2 et