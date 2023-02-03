//
// Created by 17737 on 2023/2/1.
//

#include "Core.h"
#include "thread.h"
#include "../lvgl/lvgl.h"

#include <string>

#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

struct resFiles
{
    string name;
    string path;
    string md5;
};

struct resource
{
    string id;
    string name;
    string type;
    string path;
    string md5;
};

struct levelc //关卡具体内容
{
    string step_id;
    string command[512];
    bool saveAble;
};

struct levels
{
    string id;
    string name;
    string type;
    string path;
    string md5;
    string first_stepid;

    int levelc_c;
    levelc levelc_;
};


resFiles rFiles[2048];
int rFilesCount;

resource ress[2048];
int ressCount;

levels levelss[64];
int levelssCount;

string init_level;


int Core::init(){
    thrInitSequence();
    return 0;
}

int Core::analyzeJsonData()
{
    string infoArea;
    infoArea.append(get_uiText());

    infoArea.append(string("[Resource Loader DEBUG]") + string("\n"));

    set_uiText(infoArea.c_str());

    string tString;

    std::ifstream f("package.json");
    json data = json::parse(f);

    tString = data["packageType"].get<string>();
    infoArea.append(string("PKG_TYPE - ")+tString+string("\n"));

    set_uiText(infoArea.c_str());

    while (data["file"][rFilesCount]["fileName"]!="endFlag") {
        rFiles[rFilesCount].name = data["file"][rFilesCount]["fileName"];
        rFiles[rFilesCount].path = data["file"][rFilesCount]["filePath"];
        rFiles[rFilesCount].md5  = data["file"][rFilesCount]["fileMD5"];

        infoArea.append(string("File - ") + string(data["file"][rFilesCount]["fileName"]) + string("\n"));
        set_uiText(infoArea.c_str());
        rFilesCount++;
    }
    data.clear();
    f.close();

    std::ifstream f2;
    for (int a = 0; a < rFilesCount; a++) {
        if (rFiles[a].name == "resStructure.json") {
            f2.open(rFiles[a].path + string("\\") + rFiles[a].name);
            break;
        }
    }
    json resource = json::parse(f2);
    while (resource["file"][ressCount]["name"] != "endFlag") {
        ress[ressCount].id = resource["file"][ressCount]["id"];
        ress[ressCount].name = resource["file"][ressCount]["name"];
        ress[ressCount].type = resource["file"][ressCount]["type"];
        ress[ressCount].path = resource["file"][ressCount]["path"];
        ress[ressCount].md5 = resource["file"][ressCount]["md5"];

        infoArea.append(string("Resource - ") + string(resource["file"][ressCount]["id"]) + string("\n"));
        set_uiText(infoArea.c_str());
        ressCount++;
    }
    resource.clear();
    f2.close();

    std::ifstream f3;
    for (int a = 0; a < rFilesCount; a++) {
        if (rFiles[a].name == "levelStructure.json") {
            f3.open(rFiles[a].path + string("\\") + rFiles[a].name);
            break;
        }
    }
    json levels = json::parse(f3);
    init_level = levels["firstLevelName"];
    while (levels["package"][levelssCount]["name"] != "endFlag") {
        levelss[levelssCount].id = levels["package"][levelssCount]["id"];
        levelss[levelssCount].name = levels["package"][levelssCount]["name"];
        levelss[levelssCount].type = levels["package"][levelssCount]["type"];
        levelss[levelssCount].path = levels["package"][levelssCount]["path"];
        levelss[levelssCount].md5 = levels["package"][levelssCount]["md5"];

        infoArea.append(string("Level - ") + string(levels["package"][levelssCount]["id"]) + string("\n"));
        set_uiText(infoArea.c_str());

        levelssCount++;
    }

    levels.clear();
    f3.close();

    for (int a = 0; a < levelssCount; a++) {
        std::ifstream f4;
        f4.open(levelss[a].path);
        assert(f4.is_open() == true);
        json levelp = json::parse(f4);
        levelss[a].first_stepid = levelp["first_stepid"];
        levelss[a].levelc_.step_id = levelp["step"][0]["step_id"];
        levelss[a].levelc_.saveAble = levelp["step"][0]["saveAble"];
        while (levelp["step"][0]["command"][levelss[a].levelc_c] != "endCommand") {
            levelss[a].levelc_.command[levelss[a].levelc_c] = levelp["step"][0]["command"][levelss[a].levelc_c];
            levelss[a].levelc_c++;
        }
        infoArea.append(string("LoadedLevel - ") + string(levelss[a].id) + string("\n"));
        set_uiText(infoArea.c_str());
        f4.close();
        levelp.clear();
    }

    return 0;
}

void Core::statBtnClicked()
{
}

void Core::mapBtnClicked()
{
}

void Core::msiBtnClicked()
{
}

void Core::bagBtnClicked()
{
}

void Core::menuBtnClicked()
{
}
