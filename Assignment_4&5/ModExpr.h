//
// Created by Randon Reddy on 03/12/2024.
//

#ifndef CS264_MODEXPR_H
#define CS264_MODEXPR_H
#include "BinaryExpr.h"

class ModExpr : public BinaryExpr{
    public:
        ModExpr(Expr* left, Expr* right);
        virtual std::string toStr() const; //toStr method to override in implementation
};


#endif //CS264_MODEXPR_H
