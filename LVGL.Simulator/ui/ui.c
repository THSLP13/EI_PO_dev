// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.3.4
// PROJECT: SquareLine_Project2

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Main;
lv_obj_t * ui_Hint;
lv_obj_t * ui_ProgressBar;
lv_obj_t * ui_HeadName;
lv_obj_t * ui_HPBar;
lv_obj_t * ui_ManaBar;
void ui_event_HeadImage(lv_event_t * e);
lv_obj_t * ui_HeadImage;
lv_obj_t * ui_LoadHint;
void ui_event_MenuBar(lv_event_t * e);
lv_obj_t * ui_MenuBar;
lv_obj_t * ui_Hint1;
lv_obj_t * ui_InfoArea;
void ui_event_ChooseScroll(lv_event_t * e);
lv_obj_t * ui_ChooseScroll;
lv_obj_t * ui_HintChooseAct;
void ui_event_Backpack(lv_event_t * e);
lv_obj_t * ui_Backpack;
lv_obj_t * ui_Bpl;
void ui_event_MagicSeat(lv_event_t * e);
lv_obj_t * ui_MagicSeat;
lv_obj_t * ui_Msl;
void ui_event_Stat(lv_event_t * e);
lv_obj_t * ui_Stat;
lv_obj_t * ui_Sl;
void ui_event_Map(lv_event_t * e);
lv_obj_t * ui_Map;
lv_obj_t * ui_Ml;
lv_obj_t * ui_MImg;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_HeadImage(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        InfoTrigger(e);
    }
}
void ui_event_MenuBar(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        MenuBarTrigger(e);
    }
}
void ui_event_ChooseScroll(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        ScrollMenuChanged(e);
    }
    if(event_code == LV_EVENT_CLICKED) {
        ScrollMenuClicked(e);
    }
}
void ui_event_Backpack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        BackpackClicked(e);
    }
}
void ui_event_MagicSeat(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        MsiPressed(e);
    }
}
void ui_event_Stat(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        StatClicked(e);
    }
}
void ui_event_Map(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        MapClicked(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Main_screen_init(void)
{
    ui_Main = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Main, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Hint = lv_label_create(ui_Main);
    lv_obj_set_width(ui_Hint, 700);
    lv_obj_set_height(ui_Hint, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Hint, 10);
    lv_obj_set_y(ui_Hint, -5);
    lv_obj_set_align(ui_Hint, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_long_mode(ui_Hint, LV_LABEL_LONG_SCROLL);
    lv_label_set_text(ui_Hint, "请等待初始化");
    lv_obj_set_scrollbar_mode(ui_Hint, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_align(ui_Hint, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Hint, &ui_font_siyuan16v2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ProgressBar = lv_bar_create(ui_Main);
    lv_bar_set_value(ui_ProgressBar, 50, LV_ANIM_OFF);
    lv_obj_set_width(ui_ProgressBar, 700);
    lv_obj_set_height(ui_ProgressBar, 10);
    lv_obj_set_x(ui_ProgressBar, 10);
    lv_obj_set_y(ui_ProgressBar, -35);
    lv_obj_set_align(ui_ProgressBar, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_style_anim_time(ui_ProgressBar, 250, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HeadName = lv_label_create(ui_Main);
    lv_obj_set_width(ui_HeadName, 80);
    lv_obj_set_height(ui_HeadName, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_HeadName, 81);
    lv_obj_set_y(ui_HeadName, 3);
    lv_label_set_text(ui_HeadName, "EIPO");
    lv_obj_set_style_text_font(ui_HeadName, &ui_font_siyuan16v2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HPBar = lv_bar_create(ui_Main);
    lv_bar_set_value(ui_HPBar, 50, LV_ANIM_OFF);
    lv_obj_set_width(ui_HPBar, 150);
    lv_obj_set_height(ui_HPBar, 10);
    lv_obj_set_x(ui_HPBar, 82);
    lv_obj_set_y(ui_HPBar, 31);
    lv_obj_set_style_bg_color(ui_HPBar, lv_color_hex(0x7F2222), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HPBar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_HPBar, lv_color_hex(0xFF0000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HPBar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_ManaBar = lv_bar_create(ui_Main);
    lv_bar_set_value(ui_ManaBar, 50, LV_ANIM_OFF);
    lv_obj_set_width(ui_ManaBar, 150);
    lv_obj_set_height(ui_ManaBar, 10);
    lv_obj_set_x(ui_ManaBar, 82);
    lv_obj_set_y(ui_ManaBar, 48);
    lv_obj_set_style_bg_color(ui_ManaBar, lv_color_hex(0x1743A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ManaBar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_ManaBar, lv_color_hex(0x0096FF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ManaBar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_HeadImage = lv_img_create(ui_Main);
    lv_img_set_src(ui_HeadImage, &ui_img_head_png);
    lv_obj_set_width(ui_HeadImage, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HeadImage, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_HeadImage, 5);
    lv_obj_set_y(ui_HeadImage, 5);
    lv_obj_add_flag(ui_HeadImage, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_HeadImage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LoadHint = lv_spinner_create(ui_Main, 1000, 90);
    lv_obj_set_width(ui_LoadHint, 64);
    lv_obj_set_height(ui_LoadHint, 64);
    lv_obj_set_x(ui_LoadHint, -5);
    lv_obj_set_y(ui_LoadHint, 5);
    lv_obj_set_align(ui_LoadHint, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_LoadHint, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_arc_width(ui_LoadHint, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_width(ui_LoadHint, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_MenuBar = lv_btn_create(ui_Main);
    lv_obj_set_width(ui_MenuBar, 32);
    lv_obj_set_height(ui_MenuBar, 32);
    lv_obj_set_x(ui_MenuBar, -21);
    lv_obj_set_y(ui_MenuBar, 22);
    lv_obj_set_align(ui_MenuBar, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_state(ui_MenuBar, LV_STATE_DISABLED);       /// States
    lv_obj_add_flag(ui_MenuBar, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MenuBar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Hint1 = lv_label_create(ui_Main);
    lv_obj_set_width(ui_Hint1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Hint1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Hint1, 18);
    lv_obj_set_y(ui_Hint1, -194);
    lv_obj_set_align(ui_Hint1, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_Hint1, "信息");
    lv_obj_set_style_text_font(ui_Hint1, &ui_font_siyuan16v2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_InfoArea = lv_textarea_create(ui_Main);
    lv_obj_set_width(ui_InfoArea, 384);
    lv_obj_set_height(ui_InfoArea, 138);
    lv_obj_set_x(ui_InfoArea, 11);
    lv_obj_set_y(ui_InfoArea, 240);
    lv_obj_set_align(ui_InfoArea, LV_ALIGN_LEFT_MID);
    lv_textarea_set_text(ui_InfoArea, " ");
    lv_obj_clear_flag(ui_InfoArea, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SNAPPABLE);      /// Flags
    lv_obj_set_scroll_dir(ui_InfoArea, LV_DIR_VER);
    lv_obj_set_style_text_letter_space(ui_InfoArea, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_InfoArea, -10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_InfoArea, &ui_font_siyuan16v2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChooseScroll = lv_roller_create(ui_Main);
    lv_roller_set_options(ui_ChooseScroll, "继续\n设置\n新游戏", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_width(ui_ChooseScroll, 120);
    lv_obj_set_height(ui_ChooseScroll, 135);
    lv_obj_set_x(ui_ChooseScroll, 108);
    lv_obj_set_y(ui_ChooseScroll, 241);
    lv_obj_set_align(ui_ChooseScroll, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ChooseScroll, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_text_font(ui_ChooseScroll, &ui_font_siyuan16v2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HintChooseAct = lv_label_create(ui_Main);
    lv_obj_set_width(ui_HintChooseAct, 115);
    lv_obj_set_height(ui_HintChooseAct, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_HintChooseAct, 107);
    lv_obj_set_y(ui_HintChooseAct, 152);
    lv_obj_set_align(ui_HintChooseAct, LV_ALIGN_CENTER);
    lv_label_set_text(ui_HintChooseAct, "请选择你的动作");
    lv_obj_set_style_text_font(ui_HintChooseAct, &ui_font_siyuan16v2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backpack = lv_btn_create(ui_Main);
    lv_obj_set_width(ui_Backpack, 64);
    lv_obj_set_height(ui_Backpack, 64);
    lv_obj_set_x(ui_Backpack, 224);
    lv_obj_set_y(ui_Backpack, 203);
    lv_obj_set_align(ui_Backpack, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Backpack, LV_STATE_DISABLED);       /// States
    lv_obj_add_flag(ui_Backpack, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Backpack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Backpack, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Backpack, 48, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Backpack, lv_color_hex(0x0096FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Backpack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Backpack, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Backpack, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Backpack, &ui_font_siyuan16v2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bpl = lv_label_create(ui_Backpack);
    lv_obj_set_width(ui_Bpl, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Bpl, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Bpl, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Bpl, "背包");

    ui_MagicSeat = lv_btn_create(ui_Main);
    lv_obj_set_width(ui_MagicSeat, 64);
    lv_obj_set_height(ui_MagicSeat, 64);
    lv_obj_set_x(ui_MagicSeat, 302);
    lv_obj_set_y(ui_MagicSeat, 203);
    lv_obj_set_align(ui_MagicSeat, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_MagicSeat, LV_STATE_DISABLED);       /// States
    lv_obj_add_flag(ui_MagicSeat, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MagicSeat, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_MagicSeat, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MagicSeat, 48, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_MagicSeat, lv_color_hex(0x0096FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_MagicSeat, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_MagicSeat, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_MagicSeat, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MagicSeat, &ui_font_siyuan16v2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Msl = lv_label_create(ui_MagicSeat);
    lv_obj_set_width(ui_Msl, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Msl, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Msl, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Msl, "法术位");

    ui_Stat = lv_btn_create(ui_Main);
    lv_obj_set_width(ui_Stat, 64);
    lv_obj_set_height(ui_Stat, 64);
    lv_obj_set_x(ui_Stat, 224);
    lv_obj_set_y(ui_Stat, 275);
    lv_obj_set_align(ui_Stat, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Stat, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Stat, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Stat, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Stat, 48, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Stat, lv_color_hex(0x0096FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Stat, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Stat, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Stat, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Stat, &ui_font_siyuan16v2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Sl = lv_label_create(ui_Stat);
    lv_obj_set_width(ui_Sl, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Sl, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Sl, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Sl, "状态");

    ui_Map = lv_btn_create(ui_Main);
    lv_obj_set_width(ui_Map, 64);
    lv_obj_set_height(ui_Map, 64);
    lv_obj_set_x(ui_Map, 302);
    lv_obj_set_y(ui_Map, 275);
    lv_obj_set_align(ui_Map, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Map, LV_STATE_DISABLED);       /// States
    lv_obj_add_flag(ui_Map, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Map, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Map, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Map, 48, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Map, lv_color_hex(0x0096FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Map, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Map, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Map, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Map, &ui_font_siyuan16v2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Ml = lv_label_create(ui_Map);
    lv_obj_set_width(ui_Ml, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Ml, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Ml, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Ml, "地图");

    ui_MImg = lv_img_create(ui_Main);
    lv_obj_set_width(ui_MImg, 700);
    lv_obj_set_height(ui_MImg, 360);
    lv_obj_set_x(ui_MImg, 0);
    lv_obj_set_y(ui_MImg, -65);
    lv_obj_set_align(ui_MImg, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MImg, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MImg, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_HeadImage, ui_event_HeadImage, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MenuBar, ui_event_MenuBar, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ChooseScroll, ui_event_ChooseScroll, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Backpack, ui_event_Backpack, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MagicSeat, ui_event_MagicSeat, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Stat, ui_event_Stat, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Map, ui_event_Map, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Main_screen_init();
    lv_disp_load_scr(ui_Main);
}
