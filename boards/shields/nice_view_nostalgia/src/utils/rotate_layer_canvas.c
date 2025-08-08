#include "../../include/utils/rotate_layer_canvas.h"

#include <lvgl.h>
#include "../../include/main.h"
#include "../../include/colors.h"

void rotate_layer_canvas() {
    static lv_color_t cbuf_tmp[LV_CANVAS_BUF_SIZE_TRUE_COLOR(LAYER_CANVAS_WIDTH, LAYER_CANVAS_HEIGHT)];
    memcpy(cbuf_tmp, layer_canvas_buffer, sizeof(cbuf_tmp));

    lv_img_dsc_t img;
    img.data = (void*)cbuf_tmp;
    img.header.cf = LV_IMG_CF_TRUE_COLOR;
    img.header.w = LAYER_CANVAS_WIDTH;
    img.header.h = LAYER_CANVAS_HEIGHT;

    lv_canvas_fill_bg(layer_canvas, BACKGROUND_COLOR, LV_OPA_COVER);
    lv_canvas_transform(
        layer_canvas,
        &img,
        900, LV_IMG_ZOOM_NONE,
        -1, 0,
        LAYER_CANVAS_WIDTH / 2, LAYER_CANVAS_HEIGHT / 2,
        false
    );
}
