//
// Created by Randon Reddy on 04/12/2024.
//

#ifndef CS264_VISITOR_H
#define CS264_VISITOR_H
class Expr;
class ConstExpr;
class AddExpr;
class SubExpr;
class MulExpr;
class DivExpr;
class ModExpr;

class Visitor{
    public:
        virtual double visit(Expr* Expr) = 0;
        virtual double visit(ConstExpr* constExpr) = 0;
        virtual double visit(AddExpr* AddExpr) = 0;
        virtual double visit(SubExpr* SubExpr) = 0;
        virtual double visit(MulExpr* MulExpr) = 0;
        virtual double visit(DivExpr* DivExpr) = 0;
        virtual double visit(ModExpr* ModExpr) = 0;
};
#endif //CS264_VISITOR_H
