//
// Created by Randon Reddy on 03/12/2024.
//

#include "DivExpr.h"
#include "Visitor.h" //header file for Visitor to override the Eval method

DivExpr::DivExpr(Expr *left, Expr *right) : BinaryExpr(left,right){ // Constructor to assign left and right parts of division expression. Passes it to BinaryExpr constructor to initialize right and left pointers of Expr class

}

double DivExpr::eval(Visitor *Visitor) { //Override of eval method for division expression
    return Visitor->visit(this); //calls visit method from visitor to evaluate this DivExpr
}

std::string DivExpr::toStr() const {
    return left->toStr() + " / " + right->toStr(); //returning string representation of division expression
}

DivExpr::~DivExpr() { //destructor for DivExpr
//    delete right; //commented out as you can use binaryExpr destructor (to avoid seg. faults [tries to delete pointer twice])
//    delete left;
}