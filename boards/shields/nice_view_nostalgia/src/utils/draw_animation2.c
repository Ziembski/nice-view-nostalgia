#include "../../include/utils/draw_animation2.h"

#include <lvgl.h>
#include "../../include/images/animation2_1.h"


void draw_animation2(lv_obj_t* canvas, unsigned index) {
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);

    switch (index % 1) {
        case 0: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_1, &img_dsc);
            break;
        }
    

    }
}
