#include "lvgl.h"



static lv_obj_t *label;
static int32_t a = 10; // Example variable a



  static void update_label_color(int32_t a)
{
    if(a == 10) {
        lv_label_set_text(label, "Value is 10");
        lv_obj_set_style_text_color(label, lv_color_hex3(0x00F), LV_PART_MAIN);
    } else if(a == 20) {
        lv_label_set_text(label, "Value is 20");
        lv_obj_set_style_text_color(label, lv_color_hex3(0xFF0), LV_PART_MAIN);
    } else if(a == 30) {
        lv_label_set_text(label, "Value is 30");
        lv_obj_set_style_text_color(label, lv_color_hex3(0xF00), LV_PART_MAIN);
    } else {
        lv_label_set_text(label, "Value not set");
        lv_obj_set_style_text_color(label, lv_palette_main(LV_PALETTE_GREY), LV_PART_MAIN);
    }
}
void example_lvgl_demo_ui(lv_disp_t *disp) {

  lv_obj_t *scr = lv_disp_get_scr_act(disp);

  /* Create a label to display the value */
  label = lv_label_create(scr);
  lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 20); // Align to the top middle of the screen
 
  /* Update the label based on the value of a */
  update_label_color(a);
}