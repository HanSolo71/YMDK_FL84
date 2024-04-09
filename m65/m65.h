/*
Copyright 2021-2022 Alin M Elena <alinm.elena@gmail.com>

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

#include "quantum.h"


#define LAYOUT( \
                L002, L003, L004, L005, L006, L007, L008, R060, R061, R062, R063, R064, R065, R066, R067, R068,\
    L010, L011, L012, L013, L014, L015, L016, L017, L018, R070, R071, R072, R073, R074, R075, R076,       R078,\
    L020, L021, L022, L023, L024, L025, L026, L027,       R080, R081, R082, R083, R084, R085, R086, R087, R088,\
    L030, L031, L032, L033, L034, L035, L036, L037,       R090, R091, R092, R093, R094, R095,       R097, R098,\
    L040, L041, L042, L043, L044, L045, L046, L047,       R100, R101, R102, R103, R104,       R106, R107, R108,\
    L050, L051, L052, L053, L054, L055, L057,             R110,       R112, R113, R114,       R116, R117, R118\
) { \
    { KC_NO, KC_NO, L002,  L003,  L004,  L005,  L006,  L007,  L008 }, \
    { L010,  L011,  L012,  L013,  L014,  L015,  L016,  L017,  L018 }, \
    { L020,  L021,  L022,  L023,  L024,  L025,  L026,  L027,  KC_NO }, \
    { L030,  L031,  L032,  L033,  L034,  L035,  L036,  L037,  KC_NO }, \
    { L040,  L041,  L042,  L043,  L044,  L045,  L046,  L047,  KC_NO }, \
    { L050,  L051,  L052,  L053,  L054,  L055,  L057,  KC_NO, KC_NO }, \
    { R060,  R061,  R062,  R063,  R064,  R065,  R066,  R067,  R068 }, \
    { R070,  R071,  R072,  R073,  R074,  R075,  R076,  KC_NO, R078 }, \
    { R080,  R081,  R082,  R083,  R084,  R085,  R086,  R087,  R088 }, \
    { R090,  R091,  R092,  R093,  R094,  R095,  KC_NO, R097,  R098 }, \
    { R100,  R101,  R102,  R103,  R104,  KC_NO, R106,  R107,  R108 }, \
    { R110,  KC_NO, R112,  R113,  R114,  KC_NO, R116,  R117,  R118 }  \
}



void Stm32_Rest(void);

