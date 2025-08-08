#pragma once

#include <zmk/display/status_screen.h>

#include <lvgl.h>

#define SCREEN_WIDTH 160
#define SCREEN_HEIGHT 68

#define TOP_WIDTH 25

#define LAYER_WIDTH 20

#define BATTERY_CANVAS_WIDTH (TOP_WIDTH)
#define BATTERY_CANVAS_HEIGHT (SCREEN_HEIGHT / 2)

#define CONNECTIVITY_CANVAS_WIDTH (SCREEN_HEIGHT / 2)
#define CONNECTIVITY_CANVAS_HEIGHT (CONNECTIVITY_CANVAS_WIDTH)
#define CONNECTIVITY_CANVAS_AVAILABLE_HEIGHT (TOP_WIDTH)

#define LAYER_CANVAS_WIDTH (LAYER_WIDTH)
#define LAYER_CANVAS_HEIGHT (SCREEN_HEIGHT)

#define C_MAIN_CANVAS_WIDTH (SCREEN_WIDTH - TOP_WIDTH - LAYER_WIDTH)
#define C_MAIN_CANVAS_HEIGHT (SCREEN_HEIGHT)

#define P_MAIN_CANVAS_WIDTH (SCREEN_WIDTH - TOP_WIDTH)
#define P_MAIN_CANVAS_HEIGHT (SCREEN_HEIGHT)

extern lv_obj_t* battery_canvas;
extern lv_color_t battery_canvas_buffer[];

extern lv_obj_t* connectivity_canvas;
extern lv_color_t connectivity_canvas_buffer[];

extern lv_obj_t* layer_canvas;
extern lv_color_t layer_canvas_buffer[];

extern lv_obj_t* c_main_canvas;
extern lv_color_t c_main_canvas_buffer[];

extern lv_obj_t* p_main_canvas;
extern lv_color_t p_main_canvas_buffer[];
