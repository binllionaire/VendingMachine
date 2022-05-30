//
//  Maintenance.hpp
//  VendingMachine
//
//  Created by 황수콩 on 2022/05/16.
//
#include <iostream>
using namespace std;
#pragma once
#include "Beverage.hpp"

class Maintenance{
private:
    int coin, count;
    int w500,w100,w50,w10;
    Coffee coffee;
    Milk milk;
    AppleJuice appleJuice;
    BubbleTea bubbleTea;
    Coke coke;
    GreenTea greenTea;
    int menu;
    int take;
public:
    Maintenance();
    void setCoffee(int i);
    void setMilk(int i);
    void setAppleJuice(int i);
    void setBubbleTea(int i);
    void setCoke(int i);
    void setGreenTea(int i);
    int getW500();
    int getW100();
    int getW50();
    int getW10();
    void setW500(int c500);
    void setW100(int c100);
    void setW50(int c50);
    void setW10(int c10);
    void showCoin();
    int maintenanceMenu();
    void supplyCoin();
    void report();
    
};
