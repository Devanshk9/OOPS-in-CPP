//
// Created by Apple on 16/09/25.
//
#include <iostream>
using namespace std;

class Number {
    int n;
public:
    Number(int val=0) : n(val) {}

    // Conversion function: class -> int
    operator int() const {
        return n;   // return the private member
    }
};

int main() {
    Number num(42);

    int x = num;   // Implicit conversion (calls operator int)
    cout << "x = " << x << endl;

    cout << num + 10 << endl;  // num converted to int, adds 10
}
