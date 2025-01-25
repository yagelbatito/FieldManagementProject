// Created by Yagel on 25/02/2024.
// Link to gitHub: https://github.com/yagelbatito
//
#include "Color.h"
#include <iostream>
#include <SQLiteCpp/SQLiteCpp.h>
#include "Player.h"
#include "Menu.h"
using namespace std;
using namespace SQLite;

int main(){

    Database db("FieldManagement.db", OPEN_READWRITE|OPEN_CREATE);
    cout << "Field Management Project by: \n"
            "Segev Chen 322433400 \n"
            "Yinon Alfasi 208810374 \n"
            "Yagel batito 318271863 \n"
            "Noa Kraif 208595157 \n"
            "Yael Berko 213435399 \n"
            "Git link: https://github.com/IMrMoon/FieldManagementProject.git" << endl;
    first_menu();
return 0;
}