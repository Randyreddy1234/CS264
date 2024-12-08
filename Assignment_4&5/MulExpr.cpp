//
// Created by Randon Reddy on 02/12/2024.
//

#include "MulExpr.h"
#include "Visitor.h"

MulExpr::MulExpr(Expr *left, Expr *right) : BinaryExpr(left, right) {

}

double MulExpr::eval(Visitor *Visitor) {
    return Visitor->visit(this);
}

std::string MulExpr::toStr() const {
    return left->toStr() + " * " + right->toStr(); //returning sub expression
}

MulExpr::~MulExpr() {
//    delete right;
//    delete left;
}