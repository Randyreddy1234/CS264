//
// Created by Randon Reddy on 03/12/2024.
//

#include "ModExpr.h"
#include "Visitor.h" //header file for Visitor to override the Eval method

ModExpr::ModExpr(Expr *left, Expr *right) : BinaryExpr(left,right){ // Constructor to assign left and right parts of modulo expression. Passes it to BinaryExpr constructor to initialize right and left pointers of Expr class

}

double ModExpr::eval(Visitor *Visitor) { //Override of eval method for modulo expression
    return Visitor->visit(this); //calls visit method from visitor to evaluate this ModExpr
}

std::string ModExpr::toStr() const {
    return left->toStr() + " % " + right->toStr(); //returning string representation of Mod expression
}

ModExpr::~ModExpr() { //destructor for ModExpr
//    delete right; //commented out as you can use binaryExpr destructor (to avoid seg. faults [tries to delete pointer twice])
//    delete left;
}