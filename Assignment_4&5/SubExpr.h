//
// Created by Randon Reddy on 02/12/2024.
//

#ifndef CS264_SUBEXPR_H
#define CS264_SUBEXPR_H
#include "BinaryExpr.h"

class SubExpr : public BinaryExpr{
    public:
        SubExpr(Expr* left, Expr* right);
        virtual std::string toStr() const; //toStr method to override in implementation
};


#endif //CS264_SUBEXPR_H
