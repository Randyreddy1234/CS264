//
// Created by Randon Reddy on 02/12/2024.
//

#include "ConstExpr.h"
#include "Visitor.h" //header file for Visitor to override the Eval method
#include <sstream>

ConstExpr ::ConstExpr(double in) { //implementation of ConstExpr constructor
    val = in; //assign parameter to val variable
}

double ConstExpr::getVal() const{ //getter method to return value for constant expression
    return val; //return val variable
}

double ConstExpr::eval(Visitor *Visitor) { //Override of eval method for constant expression
    return Visitor->visit(this); //calls visit method from visitor to evaluate this ConstExpr
}

std::string ConstExpr::toStr() const { //implementation of toStr method in ConstExpr
    std::ostringstream s; //creating string stream to store double value
    s << val; //read double val in
    return s.str(); //convert string stream to string and return
}
