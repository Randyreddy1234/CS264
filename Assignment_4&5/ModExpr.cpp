//
// Created by Randon Reddy on 03/12/2024.
//

#include "ModExpr.h"
#include "Visitor.h"

ModExpr::ModExpr(Expr *left, Expr *right) : BinaryExpr(left,right){

}

double ModExpr::eval(Visitor *Visitor) {
    return Visitor->visit(this);
}

std::string ModExpr::toStr() const {
    return left->toStr() + " % " + right->toStr(); //returning Mod expression
}

ModExpr::~ModExpr() {
//    delete right;
//    delete left;
}