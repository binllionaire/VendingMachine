//
//  Operation.hpp
//  VendingMachine
//
//  Created by 황수콩 on 2022/05/16.
//
#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Maintenance.hpp"
#include "Beverage.hpp"
class Operation : public Maintenance{

private:
    Coffee coffee;
    Milk milk;
    AppleJuice appleJuice;
    BubbleTea bubbleTea;
    Coke coke;
    GreenTea greenTea;
    
    int c500,c100,c50,c10;
    int change;
    int price;
    int total;
    int money; // 투입 금액
    int drinkNum;
    string drink;
    int flag;
    

public:
    Operation();
    int calculate();
    void showDrink();
    void showInput();
    void showMoney();
    void setPrice();
    void input();
    void select();
};
