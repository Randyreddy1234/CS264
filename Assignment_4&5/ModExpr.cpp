//
// Created by Randon Reddy on 03/12/2024.
//

#include "ModExpr.h"

ModExpr::ModExpr(Expr *left, Expr *right) : BinaryExpr(left,right){

}

std::string ModExpr::toStr() const {
    return left->toStr() + " % " + right->toStr(); //returning Mod expression
}