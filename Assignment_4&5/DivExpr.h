//
// Created by Randon Reddy on 03/12/2024.
//

#ifndef CS264_DIVEXPR_H
#define CS264_DIVEXPR_H
#include "BinaryExpr.h"

class DivExpr : public BinaryExpr {
    public:
        DivExpr(Expr* left, Expr* right);
        virtual std::string toStr() const ; //toStr method to override in implementation
        virtual double eval(Visitor *Visitor);
        virtual ~DivExpr(); //destructor for DivExpr
};


#endif //CS264_DIVEXPR_H
