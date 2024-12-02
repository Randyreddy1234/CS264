//
// Created by Randon Reddy on 02/12/2024.
//

#include <iostream>
#include "ConstExpr.h"
#include "AddExpr.h"

int main(){
    ConstExpr* c1 = new ConstExpr(3);
    ConstExpr* c2 = new ConstExpr(4);
    AddExpr* a1 = new AddExpr(c1,c2);

    std::cout << a1->toStr() << std::endl;
    delete c1;
    delete c2;
    delete a1;


}