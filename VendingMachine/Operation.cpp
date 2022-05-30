//
//  Operation.cpp
//  VendingMachine
//
//  Created by 황수콩 on 2022/05/16.
//

#include "Operation.hpp"
Operation::Operation()
:total(0),flag(0)
{
    
}


void Operation::showDrink(){
    cout << "------------------------------------------"<<endl;
    cout << "                음료수 자판기             "<<endl;
    cout << "------------------------------------------"<<endl;
    cout << "                                        "<<endl;
    cout << "    1. ☕         2. 🥛         3. 🧃      "<<endl;
    cout << "   커피|350원   우유|500원  사과주스|700원  "<<endl;
    cout << "                                        "<<endl;
    cout << "    4. 🧋          5. 🥤        6. 🍵       "<<endl;
    cout << "  버블티|1500원   콜라|1000원   녹차|620원    "<<endl;
    cout << "                                        "<<endl;
    cout << "------------------------------------------"<<endl;
}

void Operation::showMoney(){
    cout << " 투입금액                           "<<total<<"원"<<endl;
    cout << "------------------------------------------"<<endl;
}

void Operation::input(){
    while(1){
        showDrink();
        showMoney();
        cout << " 돈을 넣어주세요(1000,500,100,50,10)"<<endl;
        cout << " 더 이상 투입하지 않으려면 0 입력 : ";
        cin >> money;
        if(money==0){
            break;
        }
        else if(money==1000||money==500||money==100||money==50||money==10){
        total+=money;
        }
        system("clear");
    }
    select();
}

int Operation::calculate(){
    int temp = total-price;
    
    c100 = (temp%500)/100;
    c50 = ((temp%500)%100)/50;
    c10 = (((temp%500)%100)%50)/10;
    
    if((temp/500)<=getW500()){
        c500=temp/500;
        temp = temp%500;
        
    }
    else{
        temp=temp%500+((temp/500-getW500())*500);
        c500=getW500();
        
    }

    if(temp/100<=getW100()){
        c100=temp/100;
        temp=temp%100;
        
    }
    else{
        temp=temp%100+((temp/100- getW100())*100);
        c100= getW100();
        
    }
    
    if(temp/50<= getW50()){
        c50=temp/50;
        temp=temp%50;
        
    }
    else{
        temp=temp%50+((temp/50- getW50())*50);
        c50= getW50();
    }
    if(temp/10 <= getW10()){
        c10=temp/10;
        temp=temp%10;
        
    }
    else{
        cout << " 거스름돈이 모자랍니다 "<< endl;
        cout << " 운영을 중단합니다 "<< endl;
        cout << " 계속하려면 아무 키나 누르십시오..." << endl;
        system("read");
        flag=1;
    }
    
    if(flag==0){
    setW500(c500);
    setW100(c100);
    setW50(c50);
    setW10(c10);
    }
    change = c500*500+c100*100+c50*50+c10*10;
   
    return change;
    
}

void Operation::select(){
    
    system("clear");
    while(1){
    showDrink();
    showMoney();
    cout << " 음료수를 선택해주세요 (1~6) : ";
    cin >> drinkNum;
        
    if(drinkNum==1){
        price=coffee.getPrice();
    }
    else if(drinkNum==2){
        price=milk.getPrice();
    }
    else if(drinkNum==3){
        price=appleJuice.getPrice();
    }
    else if(drinkNum==4){
        price=bubbleTea.getPrice();
    }
    else if(drinkNum==5){
        price=coke.getPrice();
    }
    else if(drinkNum==6){
        price=greenTea.getPrice();
    }
    else{
        continue;
    }
    
        change = calculate();
        
        if (flag==1){
            flag=0;
            total=0;
            break;
        }
        
        if(total>=price){
            
            if(drinkNum==1){
                drink=coffee.getIcon();
                setCoffee(1);
            }
            else if(drinkNum==2){
                drink=milk.getIcon();
                setMilk(1);
            }
            else if(drinkNum==3){
                drink=appleJuice.getIcon();
                setAppleJuice(1);
            }
            else if(drinkNum==4){
                drink=bubbleTea.getIcon();
                setBubbleTea(1);
            }
            else if(drinkNum==5){
                drink=coke.getIcon();
                setCoke(1);
            }
            else if(drinkNum==6){
                drink=greenTea.getIcon();
                setGreenTea(1);
            }
        cout << "------------------------------------------"<<endl;
        cout << endl;
        cout << "                     "<<drink<<endl;
        cout << endl;
        cout << "------------------------------------------"<<endl;
        cout << "                500원 X "<<c500<<"개"<< endl;
        cout << "                100원 X "<<c100<<"개"<< endl;
        cout << "                 50원 X "<<c50<<"개"<< endl;
        cout << "                 10원 X "<<c10<<"개"<< endl;
        cout << "------------------------------------------"<<endl;
        cout << " 거스름돈 :                           "<<change<<"원"<< endl;
        cout << "------------------------------------------"<<endl;
        cout << " 계속하려면 아무 키나 누르십시오..." << endl;
        system("read");
        total=0;
        break;
        }else{
            total=0;
            cout<<" 돈이 모자랍니다"<<endl;
            cout << " 계속하려면 아무 키나 누르십시오..." << endl;
            system("read");
            system("clear");
            break;
        }
    }
}

