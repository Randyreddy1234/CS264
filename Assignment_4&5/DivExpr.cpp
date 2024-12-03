//
// Created by Randon Reddy on 03/12/2024.
//

#include "DivExpr.h"

DivExpr::DivExpr(Expr *left, Expr *right) : BinaryExpr(left,right){

}

std::string DivExpr::toStr() const {
    return left->toStr() + " / " + right->toStr(); //returning sub expression
}