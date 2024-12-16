//
// Created by Randon Reddy on 02/12/2024.
//

#include "AddExpr.h" //header file for normal AddExpr declarations
#include "Visitor.h" //header file for Visitor to override the Eval method


AddExpr::AddExpr(Expr *left, Expr *right) : BinaryExpr(left, right) { // Constructor to assign left and right parts of expression. Passes it to BinaryExpr constructor to initialize right and left pointers of Expr class

}

double AddExpr::eval(Visitor *Visitor) { //Override of eval method for addition expression
    return Visitor->visit(this); //calls visit method from visitor to evaluate this AddExpr
}

std::string AddExpr::toStr() const { //override of toStr method to construct and return string representation of add expression
    return left->toStr() + " + " + right->toStr(); //returning string representation of add expression
}

AddExpr::~AddExpr() { //destructor for AddExpr
//    delete left; //commented out as you can use BinaryExpr destructor (to avoid seg. faults [tries to delete pointer twice])
//    delete right;
}