/*******************************************************************************
 * Size: 22 px
 * Bpp: 1
 * Opts: --bpp 1 --size 22 --no-compress --font Custom Font.woff --range 32-127 --format lvgl -o custom_font_22.c
 ******************************************************************************/

#include "../../include/fonts/custom_font_22.h"

#include <lvgl.h>

#ifndef CUSTOM_FONT_22
#define CUSTOM_FONT_22 1
#endif

#if CUSTOM_FONT_22

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xe0,

    /* U+0022 "\"" */
    0xc0,

    /* U+0023 "#" */
    0xf7, 0x80,

    /* U+0024 "$" */
    0x5d, 0xf0,

    /* U+0025 "%" */
    0xaa, 0x80,

    /* U+0026 "&" */
    0xc3, 0x80,

    /* U+0027 "'" */
    0x80,

    /* U+0028 "(" */
    0x64,

    /* U+0029 ")" */
    0x98,

    /* U+002A "*" */
    0xcc,

    /* U+002B "+" */
    0x30,

    /* U+002C "," */
    0x60,

    /* U+002D "-" */
    0xc0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x48,

    /* U+0030 "0" */
    0x55, 0x0,

    /* U+0031 "1" */
    0xcb, 0x80,

    /* U+0032 "2" */
    0xeb, 0x80,

    /* U+0033 "3" */
    0xeb, 0x80,

    /* U+0034 "4" */
    0x4b, 0x80,

    /* U+0035 "5" */
    0xeb, 0x80,

    /* U+0036 "6" */
    0x7b, 0x80,

    /* U+0037 "7" */
    0xe3, 0x0,

    /* U+0038 "8" */
    0xeb, 0x80,

    /* U+0039 "9" */
    0x5d, 0x0,

    /* U+003A ":" */
    0xc0,

    /* U+003B ";" */
    0x58,

    /* U+003C "<" */
    0x64,

    /* U+003D "=" */
    0xf0,

    /* U+003E ">" */
    0x98,

    /* U+003F "?" */
    0xe0, 0x0,

    /* U+0040 "@" */
    0x7d, 0x80,

    /* U+0041 "A" */
    0x3c,

    /* U+0042 "B" */
    0xec,

    /* U+0043 "C" */
    0x64,

    /* U+0044 "D" */
    0xb8,

    /* U+0045 "E" */
    0xec,

    /* U+0046 "F" */
    0xf8,

    /* U+0047 "G" */
    0x64,

    /* U+0048 "H" */
    0xfc,

    /* U+0049 "I" */
    0xe0,

    /* U+004A "J" */
    0xd8,

    /* U+004B "K" */
    0xec,

    /* U+004C "L" */
    0xac,

    /* U+004D "M" */
    0xbe, 0x80,

    /* U+004E "N" */
    0xfe, 0x80,

    /* U+004F "O" */
    0x55, 0x0,

    /* U+0050 "P" */
    0xf8,

    /* U+0051 "Q" */
    0x5f, 0x80,

    /* U+0052 "R" */
    0xec,

    /* U+0053 "S" */
    0xeb, 0x80,

    /* U+0054 "T" */
    0xe9, 0x0,

    /* U+0055 "U" */
    0xb5, 0x0,

    /* U+0056 "V" */
    0xf0,

    /* U+0057 "W" */
    0xbe, 0x80,

    /* U+0058 "X" */
    0xcc,

    /* U+0059 "Y" */
    0xe0,

    /* U+005A "Z" */
    0xcc,

    /* U+005B "[" */
    0xec,

    /* U+005C "\\" */
    0x84,

    /* U+005D "]" */
    0xdc,

    /* U+005E "^" */
    0x30,

    /* U+005F "_" */
    0xc0,

    /* U+0060 "`" */
    0x80,

    /* U+0061 "a" */
    0x3c,

    /* U+0062 "b" */
    0xec,

    /* U+0063 "c" */
    0x64,

    /* U+0064 "d" */
    0xb8,

    /* U+0065 "e" */
    0xec,

    /* U+0066 "f" */
    0xf8,

    /* U+0067 "g" */
    0x64,

    /* U+0068 "h" */
    0xfc,

    /* U+0069 "i" */
    0xe0,

    /* U+006A "j" */
    0xd8,

    /* U+006B "k" */
    0xec,

    /* U+006C "l" */
    0xac,

    /* U+006D "m" */
    0xbe, 0x80,

    /* U+006E "n" */
    0xfe, 0x80,

    /* U+006F "o" */
    0x55, 0x0,

    /* U+0070 "p" */
    0xf8,

    /* U+0071 "q" */
    0x5f, 0x80,

    /* U+0072 "r" */
    0xec,

    /* U+0073 "s" */
    0xc9, 0x80,

    /* U+0074 "t" */
    0xe9, 0x0,

    /* U+0075 "u" */
    0xb5, 0x0,

    /* U+0076 "v" */
    0xf0,

    /* U+0077 "w" */
    0xbe, 0x80,

    /* U+0078 "x" */
    0xcc,

    /* U+0079 "y" */
    0xe0,

    /* U+007A "z" */
    0xcc,

    /* U+007B "{" */
    0x64,

    /* U+007C "|" */
    0xe0,

    /* U+007D "}" */
    0x98,

    /* U+007E "~" */
    0xf0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 20, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 20, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 40, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3, .adv_w = 60, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 60, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 60, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 20, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 12, .adv_w = 30, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13, .adv_w = 30, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 40, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 16, .adv_w = 20, .box_w = 2, .box_h = 2, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 17, .adv_w = 40, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 18, .adv_w = 20, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 40, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 24, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 20, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 20, .box_w = 2, .box_h = 3, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 42, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 40, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 44, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 60, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 30, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 30, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 60, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 60, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 40, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 60, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 40, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 30, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 30, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 40, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 87, .adv_w = 40, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 30, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 89, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 30, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 30, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 60, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 60, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 40, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 60, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 40, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 20, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 60, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 34,
    3, 43,
    8, 34,
    8, 43,
    13, 3,
    13, 8,
    15, 3,
    15, 8,
    34, 3,
    34, 8,
    34, 53,
    34, 55,
    34, 56,
    34, 58,
    35, 53,
    35, 58,
    37, 53,
    37, 58,
    39, 13,
    39, 15,
    39, 34,
    39, 66,
    40, 53,
    40, 58,
    45, 3,
    45, 8,
    45, 53,
    45, 55,
    45, 56,
    45, 58,
    48, 53,
    48, 58,
    49, 13,
    49, 15,
    50, 53,
    50, 58,
    51, 53,
    51, 58,
    52, 66,
    52, 68,
    52, 69,
    52, 70,
    52, 72,
    52, 80,
    52, 82,
    52, 91,
    53, 13,
    53, 15,
    53, 34,
    53, 48,
    53, 53,
    53, 58,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 74,
    53, 78,
    53, 79,
    53, 80,
    53, 83,
    53, 84,
    53, 86,
    53, 91,
    54, 53,
    54, 58,
    55, 13,
    55, 15,
    55, 34,
    55, 55,
    55, 56,
    55, 58,
    56, 13,
    56, 15,
    56, 34,
    56, 55,
    56, 56,
    56, 58,
    58, 13,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 55,
    58, 56,
    58, 58,
    58, 66,
    67, 71,
    67, 73,
    67, 74,
    67, 75,
    67, 76,
    67, 77,
    67, 78,
    67, 79,
    67, 81,
    67, 83,
    67, 85,
    67, 86,
    70, 66,
    70, 71,
    70, 73,
    70, 74,
    70, 75,
    70, 76,
    70, 77,
    70, 78,
    70, 79,
    70, 81,
    70, 83,
    70, 85,
    70, 86,
    71, 13,
    71, 15,
    71, 66,
    71, 71,
    71, 85,
    71, 87,
    71, 88,
    76, 85,
    80, 73,
    80, 74,
    80, 75,
    80, 76,
    80, 77,
    80, 78,
    80, 79,
    80, 81,
    80, 83,
    80, 85,
    80, 86,
    81, 73,
    81, 74,
    81, 75,
    81, 76,
    81, 77,
    81, 78,
    81, 79,
    81, 81,
    81, 83,
    81, 85,
    81, 86,
    84, 71,
    84, 73,
    84, 74,
    84, 75,
    84, 76,
    84, 77,
    84, 78,
    84, 79,
    84, 81,
    84, 83,
    84, 85,
    84, 86,
    85, 67,
    85, 68,
    85, 69,
    85, 70,
    85, 72,
    85, 89,
    87, 66,
    87, 71,
    87, 73,
    87, 74,
    87, 75,
    87, 76,
    87, 77,
    87, 78,
    87, 79,
    87, 81,
    87, 83,
    87, 85,
    87, 86,
    88, 66,
    88, 71,
    88, 73,
    88, 75,
    88, 76,
    88, 77,
    88, 78,
    88, 79,
    88, 81,
    88, 83,
    88, 85,
    88, 86,
    89, 73,
    89, 76,
    89, 77,
    89, 86,
    90, 66,
    90, 71,
    90, 73,
    90, 75,
    90, 76,
    90, 77,
    90, 78,
    90, 79,
    90, 81,
    90, 83,
    90, 85,
    90, 86,
    91, 66,
    91, 71,
    91, 77,
    91, 84,
    91, 85
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -32, -16, -32, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -32, -32, -16, -16, -16, -16, 16, 16,
    16, 16, 16, 16, 16, 16, -16, -16,
    -16, -16, -32, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, 16, 16, 16,
    16, 16, 16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -16, -16,
    -16
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 209,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t custom_font_22 = {
#else
lv_font_t custom_font_22 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 5,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};

#endif /*#if CUSTOM_FONT_22*/
