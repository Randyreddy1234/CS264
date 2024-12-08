//
// Created by Randon Reddy on 02/12/2024.
//

#ifndef CS264_BINARYEXPR_H
#define CS264_BINARYEXPR_H
#include "Expr.h"


class BinaryExpr : public Expr{
    protected:
        Expr* left; //defining pointer to left side of expression
        Expr* right; //defining pointer to right side of expression

    public:
        BinaryExpr(Expr* left, Expr* right); //defining BinaryExpr constructor
        Expr* getLeftExpr(); //defining Accessor method for left side of expression
        void setLeftExpr(Expr * left); //defining mutator method for left side of expression
        Expr* getRightExpr(); //defining Accessor method for right side of expression
        void setRightExpr(Expr* right); //defining mutator method for right side of expression
        virtual double eval(Visitor* Visitor) = 0;
        virtual ~BinaryExpr();//destructor for BinaryExpr
};


#endif //CS264_BINARYEXPR_H
