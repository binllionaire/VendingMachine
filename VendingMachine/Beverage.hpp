//
//  Beverage.cpp
//  VendingMachine
//
//  Created by 황수콩 on 2022/05/21.
//
#pragma once
#include <stdio.h>
#include <string>
using namespace std;

class Beverage{
public:
    int count=0;
    int getPrice();
    string getIcon();
};
class Coffee : public Beverage{
public:
    int getPrice();
    string getIcon();
};
class Milk : public Beverage{
public:
    int getPrice();
    string getIcon();
};
class AppleJuice : public Beverage{
public:
    int getPrice();
    string getIcon();
};
class BubbleTea : public Beverage{
public:
    int getPrice();
    string getIcon();
};
class Coke : public Beverage{
public:
    int getPrice();
    string getIcon();
};
class GreenTea : public Beverage{
public:
    int getPrice();
    string getIcon();
};
