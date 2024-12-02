//
// Created by Randon Reddy on 02/12/2024.
//

#include "AddExpr.h"

AddExpr::AddExpr(Expr *left, Expr *right) : BinaryExpr(left, right) {

}

std::string AddExpr::toStr() const {
    return left->toStr() + " + " + right->toStr(); //returning add expression
}