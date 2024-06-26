#include "m65.h"

#ifdef RGB_MATRIX_ENABLE


led_config_t g_led_config = {
    {

       {NO_LED, NO_LED,  0,  1,  2,  3,  4,  5,  6  },
         { 7,   8,   9,  10, 11, 12, 13, 14, 15  },
         { 16,  17,  18, 19, 20, 21, 22, 23,NO_LED },
         { 24,  25,  26, 27, 28, 29, 30, 31,NO_LED },
         { 32,  33,  34, 35, 36, 37, 38, 39,NO_LED },
         { 40,  41,  42, 43, 44, 45,NO_LED, 46,NO_LED },
         { 56,  57,  58, 59, 60, 61, 62, 63, 64 },
         { 65,  66,  67, 68, 69, 70, 71,NO_LED, 72 },
         { 73,  74,  75, 76, 77, 78, 79, 80, 81 },
         { 82,  83,  84, 85, 86, 87,NO_LED, 88, 89 },
         { 90,  91,  92, 93, 94,NO_LED, 95, 96, 97 },
         { 98, NO_LED,  99, 100, 101,NO_LED, 102, 103, 104 }

 /*
    { NO_LED, NO_LED, 56,  57,  58,  59,  60,  61,  62 },
    { 63,  64,  65,  66,  67,  68,  69,  70,  71 },
    { 72,  73,  74,  75,  76,  77,  78,  79,  NO_LED },
    { 80,  81,  82,  83,  84,  85,  86,  87,  NO_LED },
    { 88,  89,  90,  91,  92,  93,  94,  95,  NO_LED },
    { 96,  97,  98,  99,  100,  101,  102,  KC_NO, KC_NO },
    { 0,  1,  2,  3,  4,  5,  6,  7,  8 },
    { 9,  10,  11,  12,  13,  14,  15,  NO_LED, 16 },
    { 17,  18,  19,  20,  21,  22,  23,  24,  25 },
    { 26,  27,  28,  29,  30,  31,  NO_LED, 32,  33 },
    { 34,  35,  36,  37,  38,  NO_LED, 39,  40,  41 },
    { 42,  NO_LED, 43, 44,  45,  NO_LED, 46,  47,  48 } */

    },

  {
        // LED Index to Physical Position
         {26,0},   {39,0},  {52,0},  {65,0},  {78,0},  {91,0},  {104,0},
         {0,13},   {13,13}, {26,13}, {39,13}, {52,13}, {65,13}, {78,13}, {91,13}, {104,13},
         {0,26},   {13,26}, {29,26}, {42,26}, {55,26}, {68,26}, {81,26}, {94,26},
         {0,38},   {13,38}, {31,38}, {44,38}, {57,38}, {70,38}, {83,38}, {97,38},
         {0,51},   {13,51}, {34,51}, {47,51}, {60,51}, {73,51}, {86,51}, {100,51},
         {0,64},   {13,64}, {28,64}, {43,64}, {58,64}, {78,64}, {96,64},

         {0,0},    {45,0},  {90,0},  {90,64}, {45,54}, {0,64},  {0,32}, {0,5}, {0,10},

         {117,0},  {130,0},  {143,0},  {157,0},  {170,0},  {183,0},  {196,0},  {209,0},  {223,0},
         {117,13}, {130,13}, {143,13}, {157,13}, {170,13}, {183,13}, {211,13}, {223,13},
         {107,26}, {120,26}, {133,26}, {146,26}, {159,26}, {172,26}, {185,26}, {205,26}, {223,26},
         {110,38}, {123,38}, {136,38}, {149,38}, {162,38}, {175,38}, {195,38}, {223,38},
         {113,51}, {126,51}, {139,51}, {152,51}, {165,51}, {187,51}, {209,51}, {223,51},
         {125,64}, {145,64}, {160,64}, {175,64}, {196,64}, {209,64}, {223,64},

         {135,0},  {180,0},  {224,0},  {224,32}, {224,64}, {180,64}, {135,64},

    },
  /*  {
        // LED Index to Physical Position
         {117,0},  {130,0},  {143,0},  {157,0},  {170,0},  {183,0},  {196,0},  {209,0},  {223,0},
         {117,13}, {130,13}, {143,13}, {157,13}, {170,13}, {183,13}, {211,13}, {223,13},
         {107,26}, {120,26}, {133,26}, {146,26}, {159,26}, {172,26}, {185,26}, {205,26}, {223,26},
         {110,38}, {123,38}, {136,38}, {149,38}, {162,38}, {175,38}, {195,38}, {223,38},
         {113,51}, {126,51}, {139,51}, {152,51}, {165,51}, {187,51}, {209,51}, {223,51},
         {125,64}, {145,64}, {160,64}, {175,64}, {196,64}, {209,64}, {223,64},

         {135,0},  {180,0},  {224,0},  {224,32}, {224,64}, {180,64}, {135,64},

        {104,0}, {91,0},  {78,0}, {65,0},   {52,0}, {39,0},   {26,0},
        {104,13},{91,13},   {78,13},{65,13}, {52,13}, {39,13}, {26,13}, {13,13},            {0,13},
        {94,26}, {81,26},  {68,26}, {55,26},{42,26},{29,26}, {13,26},   {0,26},
        {97,38},  {83,38}, {70,38},  {57,38}, {44,38}, {31,38}, {13,38},  {0,38},
        {100,51},  {86,51},  {73,51}, {60,51},{47,51}, {34,51},  {13,51}, {0,51},
        {96,64}, {78,64}, {58,64}, {43,64},{28,64}, {13,64}, {0,64},

         {0,0},    {45,0},  {90,0},  {90,64}, {45,54}, {0,64},  {0,32}, {0,5}, {0,10},



    },*/
 {
      // LED Index to Flag
      4,4,4,4,4,4,4,\
      4,4,4,4,4,4,4,4,4,\
      4,4,4,4,4,4,4,4,\
      4,4,4,4,4,4,4,4,\
      4,4,4,4,4,4,4,4,\
      4,4,4,4,4,4,4,\
      2,2,2,2,2,2,2,8,8,\
      4,4,4,4,4,4,4,4,4,\
      4,4,4,4,4,4,4,4,\
      4,4,4,4,4,4,4,4,4,\
      4,4,4,4,4,4,4,4,\
      4,4,4,4,4,4,4,4,\
      4,4,4,4,4,4,4,\
      2,2,2,2,2,2,2,
    }
};




#endif


