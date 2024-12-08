//
// Created by Randon Reddy on 05/12/2024.
//

#ifndef CS264_NUMVISITOR_H
#define CS264_NUMVISITOR_H
#include "Visitor.h"

class NumVisitor : public Visitor {
    public:
        virtual double visit(Expr* Expr);
        virtual double visit(ConstExpr* ConstExpr);
        virtual double visit(AddExpr* AddExpr);
        virtual double visit(SubExpr* SubExpr);
        virtual double visit(MulExpr* MulExpr);
        virtual double visit(DivExpr* DivExpr);
        virtual double visit(ModExpr* ModExpr);
};


#endif //CS264_NUMVISITOR_H
