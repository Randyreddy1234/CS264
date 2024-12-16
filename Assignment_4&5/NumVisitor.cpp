//
// Created by Randon Reddy on 05/12/2024.
//

#include "NumVisitor.h"
#include "ConstExpr.h"
#include "AddExpr.h"
#include "SubExpr.h"
#include "MulExpr.h"
#include "DivExpr.h"
#include "ModExpr.h"
#include "cmath"

double NumVisitor::visit(Expr* Expr) { //definition of visit method for Expr class
    return Expr->eval(this); //calls expr object's eval method on itself and returns
}

double NumVisitor::visit(ConstExpr* constExpr) { //definition of visit method for ConstExpr class
    return constExpr->getVal(); //calls ConstExpr object's eval method on itself and returns its value
}

double NumVisitor::visit(AddExpr * AddExpr) { //definition of visit method for AddExpr class
    return AddExpr->getLeftExpr()->eval(this) + AddExpr->getRightExpr()->eval(this); //calls AddExpr object's eval method on itself and returns the addition of left & right side of the expression
}

double NumVisitor::visit(SubExpr * SubExpr) { //definition of visit method for SubExpr class
    return SubExpr->getLeftExpr()->eval(this) - SubExpr->getRightExpr()->eval(this); //calls SubExpr object's eval method on itself and returns the subtraction of left & right side of the expression
}

double NumVisitor::visit(MulExpr * MulExpr) { //definition of visit method for MulExpr class
    return MulExpr->getLeftExpr()->eval(this) * MulExpr->getRightExpr()->eval(this); //calls MulExpr object's eval method on itself and returns the multiplication of left & right side of the expression
}

double NumVisitor::visit(DivExpr * DivExpr) { //definition of visit method for DivExpr class
    if(DivExpr->getRightExpr()->eval(this) == 0.0){ //checks if there is no division of 0
        throw std::runtime_error("Undefined. (Division by 0)"); //throws runtime error if there is
    }
    else{
        return DivExpr->getLeftExpr()->eval(this) / DivExpr->getRightExpr()->eval(this); //calls DivExpr object's eval method on itself and returns the division of left & right side of the expression
    }
}

double NumVisitor::visit(ModExpr * ModExpr) { //definition of visit method for ModExpr class
    if(ModExpr->getRightExpr()->eval(this) == 0.0){ //checks if there is no modulo of 0
        throw std::runtime_error("Undefined. (Modulo by 0)"); //throws runtime error if there is
    }
    else{
        return abs(fmod(ModExpr->getLeftExpr()->eval(this) , ModExpr->getRightExpr()->eval(this))); //calls ModExpr object's eval method on itself and returns the modulo of left & right side of the expression
    }
}