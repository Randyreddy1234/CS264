//
// Created by Randon Reddy on 02/12/2024.
//

#ifndef CS264_CONSTEXPR_H
#define CS264_CONSTEXPR_H
#include "Expr.h"
#include <string>
#include <iostream>

class ConstExpr : public Expr{
    private:
        double val; //private double variable to store constExpr value

    public:
//        explicit
    ConstExpr(double val); //defining ConstExpr constructor
    virtual std::string toStr() const; //toStr method to override in implementation
    double getVal() const; //accessor method to retrieve val
    virtual double eval(Visitor* Visitor) ;
    virtual ~ConstExpr() = default; //destructor for ConstExpr
};

#endif //CS264_CONSTEXPR_H