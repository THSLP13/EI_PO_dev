// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.3.4
// PROJECT: SquareLine_Project2

#include "ui.h"
#include "../core/Core.h"

extern Core coreEngine;

void InfoTrigger(lv_event_t * e)
{
	// Your code here
}

void MenuBarTrigger(lv_event_t * e)
{
	// Your code here
    coreEngine.menuBtnClicked();
}

void ScrollMenuChanged(lv_event_t * e)
{
	// Your code here
}

void ScrollMenuClicked(lv_event_t * e)
{
	// Your code here
    
}

void BackpackClicked(lv_event_t * e)
{
	// Your code here
    coreEngine.bagBtnClicked();
}

void MsiPressed(lv_event_t * e)
{
	// Your code here
    coreEngine.msiBtnClicked();
}

void StatClicked(lv_event_t * e)
{
	// Your code here
    coreEngine.statBtnClicked();
}

void MapClicked(lv_event_t * e)
{
	// Your code here
    coreEngine.mapBtnClicked();
}
