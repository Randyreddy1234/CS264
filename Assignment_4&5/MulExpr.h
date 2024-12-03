//
// Created by Randon Reddy on 02/12/2024.
//

#ifndef CS264_MULEXPR_H
#define CS264_MULEXPR_H
#include "BinaryExpr.h"

class MulExpr : public BinaryExpr{
    public:
        MulExpr(Expr* left, Expr* right);
        virtual std::string toStr() const; //toStr method to override in implementation
};


#endif //CS264_MULEXPR_H
