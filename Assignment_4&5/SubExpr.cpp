//
// Created by Randon Reddy on 02/12/2024.
//

#include "SubExpr.h"
#include "Visitor.h" //header file for Visitor to override the Eval method

SubExpr::SubExpr(Expr *left, Expr *right) : BinaryExpr(left, right){ // Constructor to assign left and right parts of subtraction expression. Passes it to BinaryExpr constructor to initialize right and left pointers of Expr class

}

double SubExpr::eval(Visitor *Visitor) { //Override of eval method for subtraction expression
    return Visitor->visit(this); //calls visit method from visitor to evaluate this SubExpr
}

std::string SubExpr::toStr() const {
    return left->toStr() + " - " + right->toStr(); //returning string representation of subtraction expression
}

SubExpr::~SubExpr() { //destructor for SubExpr
//    delete right; //commented out as you can use binaryExpr destructor (to avoid seg. faults [tries to delete pointer twice])
//    delete left;
}