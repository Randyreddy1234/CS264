//
// Created by Randon Reddy on 02/12/2024.
//

#include "ConstExpr.h"
#include <sstream>

ConstExpr ::ConstExpr(double in) { //implementation of ConstExpr constructor
    val = in; //assign parameter to val variable
}

std::string ConstExpr::toStr() const { //implementation of toStr method in ConstExpr
    std::ostringstream s; //creating string stream to store double value
    s << val; //read double val in
    return s.str(); //convert string stream to string and return
}