//
// Created by Randon Reddy on 03/12/2024.
//

#include "DivExpr.h"
#include "Visitor.h"

DivExpr::DivExpr(Expr *left, Expr *right) : BinaryExpr(left,right){

}

double DivExpr::eval(Visitor *Visitor) {
    return Visitor->visit(this);
}

std::string DivExpr::toStr() const {
    return left->toStr() + " / " + right->toStr(); //returning sub expression
}

DivExpr::~DivExpr() {
//    delete right;
//    delete left;
}