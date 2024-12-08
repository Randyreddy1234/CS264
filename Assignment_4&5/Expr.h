//
// Created by Randon Reddy on 01/12/2024.
//

#ifndef CS264_EXPR_H
#define CS264_EXPR_H
#include <string>
#include <iostream>
class Visitor;

class Expr {
    public:
        virtual std::string toStr() const = 0; //defining pure virtual function toStr
        virtual double eval(Visitor* Visitor) = 0;
        virtual ~Expr() = default;//destructor for Expr
};


#endif //CS264_EXPR_H
