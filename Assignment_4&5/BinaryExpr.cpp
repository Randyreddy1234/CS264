//
// Created by Randon Reddy on 02/12/2024.
//

#include "BinaryExpr.h"

BinaryExpr::BinaryExpr(Expr *left, Expr *right) /*: left(left), right(right)*/ { //constructor for BinaryExpr to assign left & right sides of expression (commented out part is another way to do this)
    this->left = left;
    this->right = right;
}

Expr *BinaryExpr::getLeftExpr() { //getter method to retrieve left side of expression
    return left;
}

void BinaryExpr::setLeftExpr(Expr *left) { //setter method to set the left side of the expression
    this->left = left;
}

Expr *BinaryExpr::getRightExpr() { //getter method to retrieve right side of expression
    return right;
}

void BinaryExpr::setRightExpr(Expr *right) { //setter method to set the right side of the expression
    this->right = right;
}

BinaryExpr::~BinaryExpr() { //destructor to delete left and right expr pointers
    delete right;
    delete left;
}