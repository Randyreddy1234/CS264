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

double NumVisitor::visit(Expr* Expr) {
    return Expr->eval(this);
}

double NumVisitor::visit(ConstExpr* constExpr) {
    return constExpr->getVal();
}

double NumVisitor::visit(AddExpr * AddExpr) {
    return AddExpr->getLeftExpr()->eval(this) + AddExpr->getRightExpr()->eval(this);
}

double NumVisitor::visit(SubExpr * SubExpr) {
    return SubExpr->getLeftExpr()->eval(this) - SubExpr->getRightExpr()->eval(this);
}

double NumVisitor::visit(MulExpr * MulExpr) {
    return MulExpr->getLeftExpr()->eval(this) * MulExpr->getRightExpr()->eval(this);
}

double NumVisitor::visit(DivExpr * DivExpr) {
    if(DivExpr->getRightExpr()->eval(this) == 0.0){
        throw std::runtime_error("Undefined. (Division by 0)");
    }
    else{
        return DivExpr->getLeftExpr()->eval(this) / DivExpr->getRightExpr()->eval(this);
    }
}

double NumVisitor::visit(ModExpr * ModExpr) {
    if(ModExpr->getRightExpr()->eval(this) == 0.0){
        throw std::runtime_error("Undefined. (Modulo by 0)");
    }
    else{
        return ModExpr->getLeftExpr()->eval(this) / ModExpr->getRightExpr()->eval(this);
    }
}