#include "../include/main.h"

#include <lvgl.h>
#include "../include/initialize_listeners.h"

lv_obj_t* battery_canvas;
lv_color_t battery_canvas_buffer[
    LV_CANVAS_BUF_SIZE_TRUE_COLOR(
        BATTERY_CANVAS_WIDTH,
        BATTERY_CANVAS_HEIGHT
    )
];

lv_obj_t* connectivity_canvas;
lv_color_t connectivity_canvas_buffer[
    LV_CANVAS_BUF_SIZE_TRUE_COLOR(
        CONNECTIVITY_CANVAS_WIDTH,
        CONNECTIVITY_CANVAS_HEIGHT
    )
];

lv_obj_t* layer_canvas;
lv_color_t layer_canvas_buffer[
    LV_CANVAS_BUF_SIZE_TRUE_COLOR(
        LAYER_CANVAS_WIDTH,
        LAYER_CANVAS_HEIGHT
    )
];

lv_obj_t* c_main_canvas;
lv_color_t c_main_canvas_buffer[
    LV_CANVAS_BUF_SIZE_TRUE_COLOR(
        C_MAIN_CANVAS_WIDTH,
        C_MAIN_CANVAS_HEIGHT
    )
];

lv_obj_t* p_main_canvas;
lv_color_t p_main_canvas_buffer[
    LV_CANVAS_BUF_SIZE_TRUE_COLOR(
        P_MAIN_CANVAS_WIDTH,
        P_MAIN_CANVAS_HEIGHT
    )
];

// ZMK calls this function directly in `app/src/display/main.c` of its source
// code.
lv_obj_t* zmk_display_status_screen() {
    // Setup the base screen.
    lv_obj_t* screen = lv_obj_create(NULL);
    lv_obj_set_size(screen, SCREEN_WIDTH, SCREEN_HEIGHT);

    // Create the battery canvas to be used in the `render_battery` function.
    battery_canvas = lv_canvas_create(screen);
    lv_obj_align(battery_canvas, LV_ALIGN_TOP_RIGHT, 0, 0);
    lv_canvas_set_buffer(
        battery_canvas,
        battery_canvas_buffer,
        BATTERY_CANVAS_WIDTH,
        BATTERY_CANVAS_HEIGHT,
        LV_IMG_CF_TRUE_COLOR
    );
    
    // Create the info canvas to be used in the `render_connectivity` function.
    connectivity_canvas = lv_canvas_create(screen);
    lv_obj_align(connectivity_canvas, LV_ALIGN_BOTTOM_RIGHT, 0, 0);
    lv_canvas_set_buffer(
        connectivity_canvas,
        connectivity_canvas_buffer,
        CONNECTIVITY_CANVAS_WIDTH,
        CONNECTIVITY_CANVAS_HEIGHT,
        LV_IMG_CF_TRUE_COLOR
    );

    // Create the layer canvas to be used in the `render_layer` function.
    layer_canvas = lv_canvas_create(screen);
    lv_obj_align(layer_canvas, LV_ALIGN_TOP_LEFT, 0, 0);
    lv_canvas_set_buffer(
        layer_canvas,
        layer_canvas_buffer,
        LAYER_CANVAS_WIDTH,
        LAYER_CANVAS_HEIGHT,
        LV_IMG_CF_TRUE_COLOR
    );
	
    // Create the c_main canvas to be used in the `render_main` function.
    c_main_canvas = lv_canvas_create(screen);
    lv_obj_align(c_main_canvas, LV_ALIGN_TOP_LEFT, 0, 0);
    lv_canvas_set_buffer(
        c_main_canvas,
        c_main_canvas_buffer,
        C_MAIN_CANVAS_WIDTH,
        C_MAIN_CANVAS_HEIGHT,
        LV_IMG_CF_TRUE_COLOR
    );
	
    // Create the p_main canvas to be used in the `render_main` function.
    p_main_canvas = lv_canvas_create(screen);
    lv_obj_align(p_main_canvas, LV_ALIGN_TOP_LEFT, 0, 0);
    lv_canvas_set_buffer(
        p_main_canvas,
        p_main_canvas_buffer,
        P_MAIN_CANVAS_WIDTH,
        P_MAIN_CANVAS_HEIGHT,
        LV_IMG_CF_TRUE_COLOR
    );
    // Depending on which half the build is for, the implementation will differ.
    initialize_listeners();

    return screen;
}
