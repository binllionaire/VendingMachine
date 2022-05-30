//
//  Beverage.cpp
//  VendingMachine
//
//  Created by 황수콩 on 2022/05/21.
//

#include "Beverage.hpp"

int Beverage::getPrice(){
    return 0;
}
string Beverage::getIcon(){
    return " ";
}
int Coffee::getPrice(){
    return 350;
}
string Coffee::getIcon(){
    return "☕";
}
int Milk::getPrice(){
    return 500;
}
string Milk::getIcon(){
    return "🥛";
}
int AppleJuice::getPrice(){
    return 700;
}
string AppleJuice::getIcon(){
    return "🧃";
}
int BubbleTea::getPrice(){
    return 1500;
}
string BubbleTea::getIcon(){
    return "🧋";
}
int Coke::getPrice(){
    return 700;
}
string Coke::getIcon(){
    return "🥤";
}
int GreenTea::getPrice(){
    return 620;
}
string GreenTea::getIcon(){
    return "🍵";
}
