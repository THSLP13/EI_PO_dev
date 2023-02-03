// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.3.4
// PROJECT: SquareLine_Project2

#ifndef _SQUARELINE_PROJECT2_UI_H
#define _SQUARELINE_PROJECT2_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

extern lv_obj_t * ui_Main;
extern lv_obj_t * ui_Hint;
extern lv_obj_t * ui_ProgressBar;
extern lv_obj_t * ui_HeadName;
extern lv_obj_t * ui_HPBar;
extern lv_obj_t * ui_ManaBar;
void ui_event_HeadImage(lv_event_t * e);
extern lv_obj_t * ui_HeadImage;
extern lv_obj_t * ui_LoadHint;
void ui_event_MenuBar(lv_event_t * e);
extern lv_obj_t * ui_MenuBar;
extern lv_obj_t * ui_Hint1;
extern lv_obj_t * ui_InfoArea;
void ui_event_ChooseScroll(lv_event_t * e);
extern lv_obj_t * ui_ChooseScroll;
extern lv_obj_t * ui_HintChooseAct;
void ui_event_Backpack(lv_event_t * e);
extern lv_obj_t * ui_Backpack;
extern lv_obj_t * ui_Bpl;
void ui_event_MagicSeat(lv_event_t * e);
extern lv_obj_t * ui_MagicSeat;
extern lv_obj_t * ui_Msl;
void ui_event_Stat(lv_event_t * e);
extern lv_obj_t * ui_Stat;
extern lv_obj_t * ui_Sl;
void ui_event_Map(lv_event_t * e);
extern lv_obj_t * ui_Map;
extern lv_obj_t * ui_Ml;
extern lv_obj_t * ui_MImg;

void InfoTrigger(lv_event_t * e);
void MenuBarTrigger(lv_event_t * e);
void ScrollMenuChanged(lv_event_t * e);
void ScrollMenuClicked(lv_event_t * e);
void BackpackClicked(lv_event_t * e);
void MsiPressed(lv_event_t * e);
void StatClicked(lv_event_t * e);
void MapClicked(lv_event_t * e);

LV_IMG_DECLARE(ui_img_head_png);    // assets\head.png


LV_FONT_DECLARE(ui_font_siyuan16v2);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
