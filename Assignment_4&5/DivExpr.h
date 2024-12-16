//
// Created by Randon Reddy on 03/12/2024.
//

#ifndef CS264_DIVEXPR_H
#define CS264_DIVEXPR_H
#include "BinaryExpr.h"
/*DivExpr subclass to construct and evaluate division expressions*/
class DivExpr : public BinaryExpr {
    public:
        DivExpr(Expr* left, Expr* right); //constructor to assign left and right side of expression to pointers
        virtual std::string toStr() const ; //toStr method to override in implementation
        virtual double eval(Visitor *Visitor); //Eval method declaration to override
        virtual ~DivExpr(); //destructor for DivExpr
};


#endif //CS264_DIVEXPR_H
