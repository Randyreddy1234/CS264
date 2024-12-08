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
#include "NumVisitor.h"

int main(){

    ConstExpr* c1 = new ConstExpr(3);
    ConstExpr* c2 = new ConstExpr(4);
    ConstExpr* c3 = new ConstExpr(7);
    AddExpr* e1 = new AddExpr(c1,c2);
    SubExpr* e2 = new SubExpr(e1,c3);
    Visitor* visitor = new NumVisitor();
    std::cout << e2->eval(visitor) << std::endl;


}