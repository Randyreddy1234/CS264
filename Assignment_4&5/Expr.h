//
// Created by Randon Reddy on 01/12/2024.
//

#ifndef CS264_EXPR_H
#define CS264_EXPR_H
#include <string>

class Expr {
    public:
        virtual std::string toStr() const = 0; //defining pure virtual function toStr
};


#endif //CS264_EXPR_H
