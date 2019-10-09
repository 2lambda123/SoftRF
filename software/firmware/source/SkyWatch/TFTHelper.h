/*
 * TFTHelper.h
 * Copyright (C) 2019 Linar Yusupov
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TFTHELPER_H
#define TFTHELPER_H

#include <FT5206.h>

#define TFT_EXPIRATION_TIME     5 /* seconds */

#define TP_MAX_X                320
#define TP_MAX_Y                320

#define NO_DATA_TEXT            "NO DATA"
#define NO_FIX_TEXT             "NO FIX"

#define isTimeToDisplay()       (millis() - TFTTimeMarker > 2000)
#define maxof2(a,b)             (a > b ? a : b)

typedef struct Gesture_struct {
  bool     touched;
  TP_Point t_loc;
  TP_Point d_loc;
} Gesture_t;

enum {
  NO_GESTURE,
  SWIPE_LEFT,
  SWIPE_RIGHT,
  SWIPE_UP,
  SWIPE_DOWN
};

byte TFT_setup();
void TFT_loop();
void TFT_fini(const char *);

extern unsigned long TFTTimeMarker;

#endif /* TFTHELPER_H */
