//
// Created by Randon Reddy on 02/12/2024.
//

#ifndef CS264_ADDEXPR_H
#define CS264_ADDEXPR_H
#include "BinaryExpr.h"

class AddExpr : public BinaryExpr{
    public:
        AddExpr(Expr* left, Expr* right);
        virtual std::string toStr() const; //toStr method to override in implementation
};


#endif //CS264_ADDEXPR_H
