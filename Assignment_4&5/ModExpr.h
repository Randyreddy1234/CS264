//
// Created by Randon Reddy on 03/12/2024.
//

#ifndef CS264_MODEXPR_H
#define CS264_MODEXPR_H
#include "BinaryExpr.h"
/*ModExpr subclass to construct and evaluate modulo expressions*/
class ModExpr : public BinaryExpr{
    public:
        ModExpr(Expr* left, Expr* right); //constructor to assign left and right side of expression to pointers
        virtual std::string toStr() const; //toStr method to override in implementation
        virtual double eval(Visitor *Visitor); //Eval method declaration to override
        virtual ~ModExpr(); //destructor for ModExpr
};


#endif //CS264_MODEXPR_H
