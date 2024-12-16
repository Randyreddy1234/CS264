//
// Created by Randon Reddy on 02/12/2024.
//

#ifndef CS264_SUBEXPR_H
#define CS264_SUBEXPR_H
#include "BinaryExpr.h"
/*SubExpr subclass to construct and evaluate subtraction expressions*/
class SubExpr : public BinaryExpr{
    public:
        SubExpr(Expr* left, Expr* right); //constructor to assign left and right side of expression to pointers
        virtual std::string toStr() const ; //toStr method to override in implementation
        virtual double eval(Visitor *Visitor); //Eval method declaration to override
        virtual ~SubExpr();//destructor for SubExpr
};


#endif //CS264_SUBEXPR_H
