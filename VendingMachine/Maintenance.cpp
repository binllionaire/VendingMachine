//
//  Maintenance.cpp
//  VendingMachine
//
//  Created by 황수콩 on 2022/05/16.
//

#include "Maintenance.hpp"

Maintenance::Maintenance():
w500(0),w100(0),w50(0),w10(0),coin(0),count(0)
{
    
}

int Maintenance::maintenanceMenu(){
    
    do{
    cout << "------------------------------------------"<<endl;
    cout << "               유지보수 메뉴"<<endl;
    cout << "------------------------------------------"<<endl;
    cout << "             1. 동전 보급"<<endl;
    cout << "             2. 매출현황 보고서"<<endl;
    cout << "             3. 메인메뉴로 나가기"<<endl;
    cout << "------------------------------------------"<<endl;
    cout << "메뉴를 선택하세요 : ";
    cin >> menu;
    cout << endl;
    if(menu==1){
        supplyCoin();
    }
    else if (menu==2){
        report();
    }
    }while(menu!=3);
    return menu;
}
int Maintenance::getW500(){
    return w500;
}
int Maintenance::getW100(){
    return w100;
}
int Maintenance::getW50(){
    return w50;
}
int Maintenance::getW10(){
    return w10;
}

void Maintenance::setW500(int c500){
    w500 -= c500;
}
void Maintenance::setW100(int c100){
    w100 -= c100;
}
void Maintenance::setW50(int c50){
    w50 -=c50;
}
void Maintenance::setW10(int c10){
    w10 -= c10;
}

void Maintenance::showCoin(){
    system("clear");
    cout << "------------------------------------------"<<endl;
    cout << "                동전 현황"<<endl;
    cout << "------------------------------------------"<<endl;
    cout << "               500원 : " << w500 << "개" << endl;
    cout << "               100원 : " << w100 << "개" << endl;
    cout << "                50원 : " << w50 << "개" << endl;
    cout << "                10원 : " << w10 << "개" << endl;
    cout << "------------------------------------------"<<endl;
}



void Maintenance::supplyCoin(){
    while(1){
    showCoin();
    cout << "추가할 동전과 갯수를 입력하세요 (ex 500 3)"<<endl;
    cout << "더 이상 추가하지 않으려면 0 0 입력: ";
    cin >> coin >> count;
        system("clear");
    if(coin==0 && count==0){
        break;
    }
    else if(coin==500){
        w500+=count;
        showCoin();
    }
    else if(coin==100){
        w100+=count;
        showCoin();
    }
    else if(coin==50){
        w50+=count;
        showCoin();
    }
    else if(coin==10){
        w10+=count;
        showCoin();
    }
    else{
        cout << "잘못된 입력입니다" << endl;
    }
    }
}

void Maintenance::setCoffee(int i){
    coffee.count += i;
}
void Maintenance::setMilk(int i){
    milk.count +=i;
}
void Maintenance::setAppleJuice(int i){
     appleJuice.count+=i;
}
void Maintenance::setBubbleTea(int i){
    bubbleTea.count +=i;
}
void Maintenance::setCoke(int i){
    coke.count +=i;
}
void Maintenance::setGreenTea(int i){
    greenTea.count +=i;
}

void Maintenance::report(){
    take = coffee.getPrice()*coffee.count+milk.getPrice()*milk.count+appleJuice.count*appleJuice.getPrice()+bubbleTea.getPrice()*bubbleTea.count+coke.getPrice()*coke.count+greenTea.getPrice()*greenTea.count;
    system("clear");
    cout << "------------------------------------------"<<endl;
    cout << "            일일 매출현황 보고서"<<endl;
    cout << "------------------------------------------"<<endl;
    cout << "               커피 : " << coffee.count<<"개" << endl;
    cout << "               우유 : " << milk.count << "개" << endl;
    cout << "               사과주스 : " << appleJuice.count << "개" << endl;
    cout << "               버블티  : " << bubbleTea.count << "개" << endl;
    cout << "               콜라 : " << coke.count << "개" << endl;
    cout << "               녹차 : " << greenTea.count <<"개" <<endl;
    cout << "------------------------------------------"<<endl;
    cout << " 일일 총 매출액                      "<< take << "원" <<endl;
    cout << "------------------------------------------"<<endl;
    
    cout << "계속하려면 아무 키나 누르십시오..." << endl;
    system("read");
    system("clear");
}
