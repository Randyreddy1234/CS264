//
// Created by Randon Reddy on 05/12/2024.
//

#ifndef CS264_NUMVISITOR_H
#define CS264_NUMVISITOR_H
#include "Visitor.h"
/*Subclass of Visitor class to define Visitor's visit methods*/
class NumVisitor : public Visitor {
    public:
        virtual double visit(Expr* Expr); //declaration of visit method for Expr class
        virtual double visit(ConstExpr* ConstExpr); //declaration of visit method for ConstExpr class
        virtual double visit(AddExpr* AddExpr); //declaration of visit method for AddExpr class
        virtual double visit(SubExpr* SubExpr); //declaration of visit method for SubExpr class
        virtual double visit(MulExpr* MulExpr); //declaration of visit method for MulExpr class
        virtual double visit(DivExpr* DivExpr); //declaration of visit method for DivExpr class
        virtual double visit(ModExpr* ModExpr); //declaration of visit method for ModExpr class
};


#endif //CS264_NUMVISITOR_H
