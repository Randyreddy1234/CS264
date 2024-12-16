//
// Created by Randon Reddy on 02/12/2024.
//

#include "MulExpr.h"
#include "Visitor.h" //header file for Visitor to override the Eval method

MulExpr::MulExpr(Expr *left, Expr *right) : BinaryExpr(left, right) { // Constructor to assign left and right parts of multiplication expression. Passes it to BinaryExpr constructor to initialize right and left pointers of Expr class

}

double MulExpr::eval(Visitor *Visitor) { //Override of eval method for multiplication expression
    return Visitor->visit(this); //calls visit method from visitor to evaluate this MulExpr
}

std::string MulExpr::toStr() const {
    return left->toStr() + " * " + right->toStr(); //returning string representation of multiplication expression
}

MulExpr::~MulExpr() { //destructor for MulExpr
//    delete right; //commented out as you can use binaryExpr destructor (to avoid seg. faults [tries to delete pointer twice])
//    delete left;
}