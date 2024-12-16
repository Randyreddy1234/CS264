//
// Created by Randon Reddy on 02/12/2024.
//

#ifndef CS264_MULEXPR_H
#define CS264_MULEXPR_H
#include "BinaryExpr.h"
/*MulExpr subclass to construct and evaluate multiplication expressions*/
class MulExpr : public BinaryExpr{
    public:
        MulExpr(Expr* left, Expr* right); //constructor to assign left and right side of expression to pointers
        virtual std::string toStr() const; //toStr method to override in implementation
        virtual double eval(Visitor *Visitor); //Eval method declaration to override
        virtual ~MulExpr(); //destructor for MulExpr
};


#endif //CS264_MULEXPR_H
