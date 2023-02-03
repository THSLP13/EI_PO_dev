//
// Created by 17737 on 2023/2/1.
//

#include "../lvgl/lvgl.h"
#include "../ui/ui.h"
#include "Core.h"
#include "thread.h"
#include <thread>
#include <chrono>
extern Core coreEngine;
extern lv_obj_t* ui_InfoArea;

const char* get_uiText(void) {
    return lv_textarea_get_text(ui_InfoArea);
}

void set_uiText(const char* text)
{
    lv_textarea_set_text(ui_InfoArea, text);
}

void initSeq_() {
    extern lv_obj_t* ui_ProgressBar;
    extern lv_obj_t* ui_Hint;
    extern lv_obj_t* ui_ChooseScroll;

    while (!coreEngine.refrComplete);

    lv_bar_set_value(ui_ProgressBar, 0, LV_ANIM_ON);
    lv_label_set_text(ui_Hint, "正在初始化......");
    std::this_thread::sleep_for(std::chrono::seconds(3));

    while (!coreEngine.refrComplete);

    lv_label_set_text(ui_Hint, "请求远程服务器更新...");
    std::this_thread::sleep_for(std::chrono::seconds(1));

    while (!coreEngine.refrComplete);

    lv_label_set_text(ui_Hint, "正在下载 - data_full_0.9.1.ota");
    for (int a = 0; a <= 10; a++){
        while (!coreEngine.refrComplete);
            std::this_thread::sleep_for(std::chrono::microseconds(250));
            lv_bar_set_value(ui_ProgressBar, 10 * a, LV_ANIM_ON);
    }

    while (!coreEngine.refrComplete);

    lv_label_set_text(ui_Hint, "正在解压 - data_full_0.9.1.ota");
    std::this_thread::sleep_for(std::chrono::seconds(1));

    while (!coreEngine.refrComplete);

    lv_bar_set_range(ui_ProgressBar, 0, 2710);
    for (int a = 0; a <= 2710; a++) {
        if (a % 10 == 0 or a == 2710) {
            while (!coreEngine.refrComplete);
            std::this_thread::sleep_for(std::chrono::microseconds(50));
            lv_bar_set_value(ui_ProgressBar, a, LV_ANIM_OFF);
        }
    }
    lv_bar_set_value(ui_ProgressBar, 2710, LV_ANIM_OFF);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    while (!coreEngine.refrComplete);

    lv_label_set_text(ui_Hint, "热更新完成");
    lv_bar_set_range(ui_ProgressBar, 0, 1);
    lv_bar_set_value(ui_ProgressBar, 0, LV_ANIM_ON);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    while (!coreEngine.refrComplete);

    lv_label_set_text(ui_Hint, "读取存档...");
    std::this_thread::sleep_for(std::chrono::seconds(1));

    while (!coreEngine.refrComplete);

    lv_label_set_text(ui_Hint, "读取资源...");
    coreEngine.analyzeJsonData();

    while (!coreEngine.refrComplete);

    lv_label_set_text(ui_Hint, "空闲...");

    while (!coreEngine.refrComplete);

    lv_obj_add_flag(ui_ChooseScroll, LV_OBJ_FLAG_CLICKABLE);
}

bool thrInitSequence(void){
    std::thread initSeq(initSeq_);
    initSeq.detach();
    return true;
}

