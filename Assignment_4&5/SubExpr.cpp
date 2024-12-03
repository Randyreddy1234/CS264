//
// Created by Randon Reddy on 02/12/2024.
//

#include "SubExpr.h"

SubExpr::SubExpr(Expr *left, Expr *right) : BinaryExpr(left, right){

}

std::string SubExpr::toStr() const {
    return left->toStr() + " - " + right->toStr(); //returning sub expression
}