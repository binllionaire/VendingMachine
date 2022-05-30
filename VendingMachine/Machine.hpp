//
//  Machine.hpp
//  VendingMachine
//
//  Created by 황수콩 on 2022/05/16.
//
#pragma once
#include <iostream>

using namespace std;
class Machine{
private:
    int a;
    int menu;
public:
    void showMachine();
    void mainmenu();
    int getmenu();
};
