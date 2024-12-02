//
// Created by Randon Reddy on 02/12/2024.
//

#include "BinaryExpr.h"

BinaryExpr::BinaryExpr(Expr *left, Expr *right) /*: left(left), right(right)*/ {
    this->left = left;
    this->right = right;
}

Expr *BinaryExpr::getLeftExpr() {
    return left;
}

void BinaryExpr::setLeftExpr(Expr *left) {
    this->left = left;
}

Expr *BinaryExpr::getRightExpr() {
    return right;
}

void BinaryExpr::setRightExpr(Expr *right) {
    this->right = right;
}