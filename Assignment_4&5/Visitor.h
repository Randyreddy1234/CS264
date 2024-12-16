//
// Created by Randon Reddy on 04/12/2024.
//

#ifndef CS264_VISITOR_H
#define CS264_VISITOR_H
class Expr; //forward declaration of Expr class
class ConstExpr; //forward declaration of ConstExpr class
class AddExpr; //forward declaration of AddExpr class
class SubExpr; //forward declaration of SubExpr class
class MulExpr; //forward declaration of MulExpr class
class DivExpr; //forward declaration of DivExpr class
class ModExpr; //forward declaration of ModExpr class
/*Base class to derive NumVisitor sub class form. This is used to evaluate expressions*/
class Visitor{
    public:
        virtual double visit(Expr* Expr) = 0; //pure virtual method visit for Expr subclass
        virtual double visit(ConstExpr* constExpr) = 0; //pure virtual method visit for ConstExpr subclass
        virtual double visit(AddExpr* AddExpr) = 0; //pure virtual method visit for AddExpr subclass
        virtual double visit(SubExpr* SubExpr) = 0; //pure virtual method visit for SubExpr subclass
        virtual double visit(MulExpr* MulExpr) = 0; //pure virtual method visit for MulExpr subclass
        virtual double visit(DivExpr* DivExpr) = 0; //pure virtual method visit for DivExpr subclass
        virtual double visit(ModExpr* ModExpr) = 0; //pure virtual method visit for ModExpr subclass
};
#endif //CS264_VISITOR_H
