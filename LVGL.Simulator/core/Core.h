//
// Created by 17737 on 2023/2/1.
//
#pragma once

#ifndef MAIN_CPP_CORE_H
#define MAIN_CPP_CORE_H

#ifdef __cplusplus
extern "C" {
#endif



class Core {
public:
    bool refrComplete = false;//async refresh flag
    bool refrFlag = true;

    char* infoAreaText;


    int init();

    int analyzeJsonData();


    void statBtnClicked();
    void mapBtnClicked();
    void msiBtnClicked();
    void bagBtnClicked();
    void menuBtnClicked();
};

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif //MAIN_CPP_CORE_H
