/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define PRODUCT_ID 0x3536
#define DEVICE_VER 0x0001
#define PRODUCT    Dactyl-Manuform (5x6)

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// RIGHT SIDE
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }

// LEFT SIDE
// #define MATRIX_ROW_PINS { B2, B3, B1, F7, B4, B5}
// #define MATRIX_COL_PINS { E6, D7, D4, C6, D0, B6}

#define DIODE_DIRECTION COL2ROW

#define USE_SERIAL
// #define MASTER_LEFT
#define MASTER_RIGHT
