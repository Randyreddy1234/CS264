//
// Created by Randon Reddy on 02/12/2024.
//

#include "AddExpr.h"
#include "Visitor.h"


AddExpr::AddExpr(Expr *left, Expr *right) : BinaryExpr(left, right) {

}

double AddExpr::eval(Visitor *Visitor) {
    return Visitor->visit(this);
}

std::string AddExpr::toStr() const {
    return left->toStr() + " + " + right->toStr(); //returning add expression
}

AddExpr::~AddExpr() {
//    delete left;
//    delete right;
}