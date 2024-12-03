//
// Created by Randon Reddy on 02/12/2024.
//

#include <iostream>
#include "ConstExpr.h"
#include "AddExpr.h"
#include "SubExpr.h"
#include "MulExpr.h"
#include "DivExpr.h"
#include "ModExpr.h"

int main(){
    ConstExpr* c1 = new ConstExpr(3);
    ConstExpr* c2 = new ConstExpr(4);
    AddExpr* a1 = new AddExpr(c1,c2);
    SubExpr* s1 = new SubExpr(c1, c2);
    MulExpr* m1 = new MulExpr(c1, c2);
    DivExpr* d1 = new DivExpr(c1,c2);
    ModExpr* M1 = new ModExpr(c1,c2);

    std::cout << c1->toStr() << std::endl;
    std::cout << c2->toStr() << std::endl;
    std::cout << a1->toStr() << std::endl;
    std::cout << s1->toStr() << std::endl;
    std::cout << m1->toStr() << std::endl;
    std::cout << d1->toStr() << std::endl;
    std::cout << M1->toStr() << std::endl;

    std::cout << "****************************************" << std::endl;

    ConstExpr * c3 = new ConstExpr (5);
    ConstExpr * c4 = new ConstExpr (6);
    ConstExpr * c5 = new ConstExpr (7);
    AddExpr* e1 = new AddExpr(c1 ,c2 );
    SubExpr * e2 = new SubExpr( e1 , c3 );
    MulExpr* e3 = new MulExpr(e2,c4);
    DivExpr* e4 = new DivExpr(e3,c5);
    ModExpr* e5 = new ModExpr(e4,c1);


    std::cout << e1 -> toStr () << std::endl; // output 3+4
    std::cout << e2 -> toStr () << std::endl; // output 3+4 -5
    std::cout << e3 -> toStr () << std::endl;
    std::cout << e4 -> toStr () << std::endl;
    std::cout << e5 -> toStr () << std::endl;


}