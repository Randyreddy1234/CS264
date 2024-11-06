#include <iostream>
using namespace std;

int addOne(int num){
    return num + 1;
}

int main(){
    int num;
    cin >> num;

    cout << addOne(num);
}
