/* Copyright 2021 Islam Sharabash
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x1209
#define PRODUCT_ID 0x2201
#define DEVICE_VER 0x0001
#define MANUFACTURER Dygma
#define PRODUCT Raise

/* key matrix size */
// rows are doubled for split
#define MATRIX_ROWS 10
#define MATRIX_COLS 8
/* The scanners already debounce for us */
#define DEBOUNCE 0

#define DRIVER_LED_TOTAL 132

#define EEPROM_I2C_CAT24C512
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 65535
