//
// Created by Randon Reddy on 02/12/2024.
//

#include "SubExpr.h"
#include "Visitor.h"

SubExpr::SubExpr(Expr *left, Expr *right) : BinaryExpr(left, right){

}

double SubExpr::eval(Visitor *Visitor) {
    return Visitor->visit(this);
}

std::string SubExpr::toStr() const {
    return left->toStr() + " - " + right->toStr(); //returning sub expression
}

SubExpr::~SubExpr() {
//    delete right;
//    delete left;
}