//#include <iostream>
#pragma once
#include "Machine.hpp"
#include "Maintenance.hpp"
#include "Operation.hpp"


using namespace std;

int main() {
    
    Machine m;
    Operation op;
    
    do{
    m.mainmenu();
    if(m.getmenu()==1){
        if(op.maintenanceMenu()==3) {
            continue;
        }
    }
    else if(m.getmenu()==2){
        op.input();
    }
    else if(m.getmenu()==3){
        exit(0);
    }
    else continue;
    }while(m.getmenu()!=3);
    
    return 0;
}
