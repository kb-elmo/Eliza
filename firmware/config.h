// Copyright 2022 kb-elmo<mail@elmo.space> (@kb-elmo)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xA68C
#define PRODUCT_ID   0xC762
#define DEVICE_VER   0x0001
#define MANUFACTURER kb_elmo
#define PRODUCT      3liza

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { D0, D2, B2, D3 }
#define MATRIX_COL_PINS { C7, B7, B6, B5, B4, B3, D1, B1, B0, D6, D5, D4 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
