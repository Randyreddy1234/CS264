//
// Created by Randon Reddy on 02/12/2024.
//

#include "MulExpr.h"

MulExpr::MulExpr(Expr *left, Expr *right) : BinaryExpr(left, right) {

}

std::string MulExpr::toStr() const {
    return left->toStr() + " * " + right->toStr(); //returning sub expression
}