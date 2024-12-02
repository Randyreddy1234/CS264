//
// Created by Randon Reddy on 02/12/2024.
//

#ifndef CS264_CONSTEXPR_H
#define CS264_CONSTEXPR_H
#include "Expr.h"
#include <string>

class ConstExpr : public Expr{
    private:
        double val; //private double variable to store constExpr value

    public:
//        explicit
    ConstExpr(double val); //defining ConstExpr constructor
    virtual std::string toStr() const; //toStr method to override in implementation
};


#endif //CS264_CONSTEXPR_H
