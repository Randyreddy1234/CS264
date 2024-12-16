//
// Created by Randon Reddy on 02/12/2024.
//

#include <iostream>
#include "ConstExpr.h"
#include "AddExpr.h"
#include "SubExpr.h"
#include "MulExpr.h"
#include "DivExpr.h"
#include "ModExpr.h"
#include "NumVisitor.h"
#include <string>

using namespace std;

// test case 1 for testing constant expression
void ConstExpr_Test_Case_1(){
    string expected = "26";
    ConstExpr * c1 = new ConstExpr(26);
    if(expected == c1->toStr()){
        cout << "ConstExpr_Test_Case_1 PASSED : \n";
        cout << "Result: " + c1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "ConstExpr_Test_Case_1 FAILED : \n";
        cout << "Result: " + c1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
}

// test case 2 for testing constant expression
void ConstExpr_Test_Case_2(){
    string expected = "5764";
    ConstExpr * c1 = new ConstExpr(5764);
    if(expected == c1->toStr()){
        cout << "ConstExpr_Test_Case_2 PASSED : \n";
        cout << "Result: " + c1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "ConstExpr_Test_Case_2 FAILED : \n";
        cout << "Result: " + c1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
}

// test case 1 for testing addition expression .
void AddExpr_Test_Case_1(){
    string expected = "26 + 24";
    ConstExpr * c1 = new ConstExpr(26);
    ConstExpr * c2 = new ConstExpr(24);
    AddExpr * a1 = new AddExpr(c1,c2);

    if(expected == a1->toStr()){
        cout << "AddExpr_Test_Case_1 PASSED : \n";
        cout << "Result: " + a1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "AddExpr_Test_Case_1 FAILED : \n";
        cout << "Result: " + a1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 2 for testing addition expression .
void AddExpr_Test_Case_2(){
    string expected = "100 + 50";
    ConstExpr * c1 = new ConstExpr(100);
    ConstExpr * c2 = new ConstExpr(50);
    AddExpr * a1 = new AddExpr(c1,c2);

    if(expected == a1->toStr()){
        cout << "AddExpr_Test_Case_1 PASSED : \n";
        cout << "Result: " + a1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "AddExpr_Test_Case_1 FAILED : \n";
        cout << "Result: " + a1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 1 for testing addition expression evaluation.
void AddExprEval_Test_Case_1(){
    double expected = 50;
    ConstExpr * c1 = new ConstExpr(26);
    ConstExpr * c2 = new ConstExpr(24);
    AddExpr * a1 = new AddExpr(c1,c2);
    Visitor* visitor = new NumVisitor();

    if(expected == a1->eval(visitor)){
        cout << "AddExprEval_Test_Case_1 PASSED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "AddExprEval_Test_Case_1 FAILED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 2 for testing addition expression evaluation.
void AddExprEval_Test_Case_2(){
    double expected = 150;
    ConstExpr * c1 = new ConstExpr(100);
    ConstExpr * c2 = new ConstExpr(50);
    AddExpr * a1 = new AddExpr(c1,c2);
    Visitor* visitor = new NumVisitor();

    if(expected == a1->eval(visitor)){
        cout << "AddExprEval_Test_Case_2 PASSED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "AddExprEval_Test_Case_2 FAILED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 1 for testing subtraction expression .
void SubExpr_Test_Case_1(){
    string expected = "26 - 24";
    ConstExpr * c1 = new ConstExpr(26);
    ConstExpr * c2 = new ConstExpr(24);
    SubExpr * s1 = new SubExpr(c1,c2);

    if(expected == s1->toStr()){
        cout << "SubExpr_Test_Case_1 PASSED : \n";
        cout << "Result: " + s1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "SubExpr_Test_Case_1 FAILED : \n";
        cout << "Result: " + s1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 2 for testing subtraction expression .
void SubExpr_Test_Case_2(){
    string expected = "100 - 50";
    ConstExpr * c1 = new ConstExpr(100);
    ConstExpr * c2 = new ConstExpr(50);
    SubExpr * s1 = new SubExpr(c1,c2);

    if(expected == s1->toStr()){
        cout << "SubExpr_Test_Case_2 PASSED : \n";
        cout << "Result: " + s1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "SubExpr_Test_Case_2 FAILED : \n";
        cout << "Result: " + s1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 1 for testing subtraction expression evaluation.
void SubExprEval_Test_Case_1(){
    double expected = 2;
    ConstExpr * c1 = new ConstExpr(26);
    ConstExpr * c2 = new ConstExpr(24);
    SubExpr * a1 = new SubExpr(c1,c2);
    Visitor* visitor = new NumVisitor();

    if(expected == a1->eval(visitor)){
        cout << "SubExprEval_Test_Case_1 PASSED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "SubExprEval_Test_Case_1 FAILED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 2 for testing subtraction expression evaluation.
void SubExprEval_Test_Case_2(){
    double expected = 50;
    ConstExpr * c1 = new ConstExpr(100);
    ConstExpr * c2 = new ConstExpr(50);
    SubExpr * a1 = new SubExpr(c1,c2);
    Visitor* visitor = new NumVisitor();

    if(expected == a1->eval(visitor)){
        cout << "SubExprEval_Test_Case_2 PASSED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "SubExprEval_Test_Case_2 FAILED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 1 for testing multiplication expression .
void MulExpr_Test_Case_1(){
    string expected = "26 * 24";
    ConstExpr * c1 = new ConstExpr(26);
    ConstExpr * c2 = new ConstExpr(24);
    MulExpr * m1 = new MulExpr(c1,c2);

    if(expected == m1->toStr()){
        cout << "MulExpr_Test_Case_1 PASSED : \n";
        cout << "Result: " + m1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "MulExpr_Test_Case_2 FAILED : \n";
        cout << "Result: " + m1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 1 for testing multiplication expression .
void MulExpr_Test_Case_2(){
    string expected = "100 * 50";
    ConstExpr * c1 = new ConstExpr(100);
    ConstExpr * c2 = new ConstExpr(50);
    MulExpr * m1 = new MulExpr(c1,c2);

    if(expected == m1->toStr()){
        cout << "MulExpr_Test_Case_2 PASSED : \n";
        cout << "Result: " + m1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "MulExpr_Test_Case_2 FAILED : \n";
        cout << "Result: " + m1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 1 for testing multiplication expression evaluation.
void MulExprEval_Test_Case_1(){
    double expected = 624;
    ConstExpr * c1 = new ConstExpr(26);
    ConstExpr * c2 = new ConstExpr(24);
    MulExpr * a1 = new MulExpr(c1,c2);
    Visitor* visitor = new NumVisitor();

    if(expected == a1->eval(visitor)){
        cout << "MulExprEval_Test_Case_1 PASSED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "MulExprEval_Test_Case_1 FAILED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 2 for testing multiplication expression evaluation.
void MulExprEval_Test_Case_2(){
    double expected = 5000;
    ConstExpr * c1 = new ConstExpr(100);
    ConstExpr * c2 = new ConstExpr(50);
    MulExpr * a1 = new MulExpr(c1,c2);
    Visitor* visitor = new NumVisitor();

    if(expected == a1->eval(visitor)){
        cout << "MulExprEval_Test_Case_2 PASSED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "MulExprEval_Test_Case_2 FAILED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 1 for testing division expression .
void DivExpr_Test_Case_1(){
    string expected = "26 / 24";
    ConstExpr * c1 = new ConstExpr(26);
    ConstExpr * c2 = new ConstExpr(24);
    DivExpr * d1 = new DivExpr(c1,c2);

    if(expected == d1->toStr()){
        cout << "DivExpr_Test_Case_1 PASSED : \n";
        cout << "Result: " + d1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "DivExpr_Test_Case_1 FAILED : \n";
        cout << "Result: " + d1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 1 for testing division expression .
void DivExpr_Test_Case_2(){
    string expected = "100 / 50";
    ConstExpr * c1 = new ConstExpr(100);
    ConstExpr * c2 = new ConstExpr(50);
    DivExpr * d1 = new DivExpr(c1,c2);

    if(expected == d1->toStr()){
        cout << "DivExpr_Test_Case_2 PASSED : \n";
        cout << "Result: " + d1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "DivExpr_Test_Case_2 FAILED : \n";
        cout << "Result: " + d1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 1 for testing division expression evaluation.
void DivExprEval_Test_Case_1(){
    double expected = 1.08333;
    ConstExpr * c1 = new ConstExpr(26);
    ConstExpr * c2 = new ConstExpr(24);
    DivExpr * a1 = new DivExpr(c1,c2);
    Visitor* visitor = new NumVisitor();
    double tolerance = 0.0001; // Acceptable difference

    if(abs(expected - a1->eval(visitor)) <= tolerance){
        cout << "DivExprEval_Test_Case_1 PASSED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "DivExprEval_Test_Case_1 FAILED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 2 for testing division expression evaluation.
void DivExprEval_Test_Case_2(){
    double expected = 2;
    ConstExpr * c1 = new ConstExpr(100);
    ConstExpr * c2 = new ConstExpr(50);
    DivExpr * a1 = new DivExpr(c1,c2);
    Visitor* visitor = new NumVisitor();

    if(expected == a1->eval(visitor)){
        cout << "DivExprEval_Test_Case_2 PASSED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "DivExprEval_Test_Case_2 FAILED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 1 for testing modulo expression .
void ModExpr_Test_Case_1(){
    string expected = "26 % 24";
    ConstExpr * c1 = new ConstExpr(26);
    ConstExpr * c2 = new ConstExpr(24);
    ModExpr * m1 = new ModExpr(c1,c2);

    if(expected == m1->toStr()){
        cout << "ModExpr_Test_Case_1 PASSED : \n";
        cout << "Result: " + m1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "ModExpr_Test_Case_1 FAILED : \n";
        cout << "Result: " + m1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 1 for testing modulo expression .
void ModExpr_Test_Case_2(){
    string expected = "100 % 50";
    ConstExpr * c1 = new ConstExpr(100);
    ConstExpr * c2 = new ConstExpr(50);
    ModExpr * m1 = new ModExpr(c1,c2);

    if(expected == m1->toStr()){
        cout << "ModExpr_Test_Case_1 PASSED : \n";
        cout << "Result: " + m1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "ModExpr_Test_Case_1 FAILED : \n";
        cout << "Result: " + m1->toStr() << endl;
        cout << "Expected: " + expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 1 for testing modulo expression evaluation.
void ModExprEval_Test_Case_1(){
    double expected = 2;
    ConstExpr * c1 = new ConstExpr(26);
    ConstExpr * c2 = new ConstExpr(24);
    ModExpr * a1 = new ModExpr(c1,c2);
    Visitor* visitor = new NumVisitor();


    if(a1->eval(visitor) == expected){
        cout << "ModExprEval_Test_Case_1 PASSED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "ModExprEval_Test_Case_1 FAILED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}

// test case 2 for testing modulo expression evaluation.
void ModExprEval_Test_Case_2(){
    double expected = 0;
    ConstExpr * c1 = new ConstExpr(100);
    ConstExpr * c2 = new ConstExpr(50);
    ModExpr * a1 = new ModExpr(c1,c2);
    Visitor* visitor = new NumVisitor();


    if(a1->eval(visitor) == expected){
        cout << "ModExprEval_Test_Case_2 PASSED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "ModExprEval_Test_Case_2 FAILED : \n";
        cout << "Result: " << a1->eval(visitor) << endl;
        cout << "Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }
    delete c1;
    delete c2;
}
Ï
 // test case 1 for testing example expression in assignment pdf
void Example_Test_Case_1(){
    ConstExpr* c1 = new ConstExpr(3);
    ConstExpr* c2 = new ConstExpr(4);
    ConstExpr* c3 = new ConstExpr(5);
    AddExpr* e1 = new AddExpr(c1,c2);
    SubExpr* e2 = new SubExpr(e1,c3);
    string e1Expected = "3 + 4";
    string e2Expected = "3 + 4 - 5";

    if(e1Expected == e1->toStr() && e2Expected == e2->toStr()){
        cout << "Example_Test_Case_1 Part 1 PASSED : \n";
        cout << "e1 Result: " << e1->toStr() << endl;
        cout << "e1 Expected: " << e1Expected << endl;
        cout << "e2 Result: " << e2->toStr() << endl;
        cout << "e2 Expected: " << e2Expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "Example_Test_Case_1 Part 1 FAILED : \n";
        cout << "e1 Result: " << e1->toStr() << endl;
        cout << "e1 Expected: " << e1Expected << endl;
        cout << "e2 Result: " << e2->toStr() << endl;
        cout << "e2 Expected: " << e2Expected << endl;
        cout << "##########################################" << endl;
    }

    Visitor* visitor = new NumVisitor();
    double expected = 2;

    if(expected == e2->eval(visitor)){
        cout << "Example_Test_Case_1 Part 2 PASSED : \n";
        cout << "E2 sum evaluated result: " << e2->eval(visitor) << endl;
        cout << "E2 sum evaluated Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }else{
        cout << "Example_Test_Case_1 Part 2 FAILED : \n";
        cout << "E2 sum evaluated result: " << e2->eval(visitor) << endl;
        cout << "E2 sum evaluated Expected: " << expected << endl;
        cout << "##########################################" << endl;
    }

}


int main(){

    ConstExpr_Test_Case_1();
    ConstExpr_Test_Case_2();
    AddExpr_Test_Case_1();
    AddExpr_Test_Case_2();
    AddExprEval_Test_Case_1();
    AddExprEval_Test_Case_2();
    SubExpr_Test_Case_1();
    SubExpr_Test_Case_2();
    SubExprEval_Test_Case_1();
    SubExprEval_Test_Case_2();
    MulExpr_Test_Case_1();
    MulExpr_Test_Case_2();
    MulExprEval_Test_Case_1();
    MulExprEval_Test_Case_2();
    DivExpr_Test_Case_1();
    DivExpr_Test_Case_2();
    DivExprEval_Test_Case_1();
    DivExprEval_Test_Case_2();
    ModExpr_Test_Case_1();
    ModExpr_Test_Case_2();
    ModExprEval_Test_Case_1();
    ModExprEval_Test_Case_2();
    Example_Test_Case_1();
}