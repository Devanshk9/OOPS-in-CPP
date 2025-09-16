//
// Created by Apple on 16/09/25.
//
#include<iostream>

using namespace std;

class Number {
    int n;
public:
    Number(int n=0) : n(n) {}

    friend Number operator+(const Number &num, int x) {
        return Number(num.n + x);
    }

    friend Number operator+(int x, const Number &num) {
        return Number(x + num.n);   // works for "2 + A"
    }

    void display() const {
        cout << n << endl;
    }
    friend ostream& operator<<(ostream& out, const Number& num) {
        out << "Number: " << num.n;
        return out; // must return ostream to allow chaining
    }
};

int main() {
    Number A(5);

    Number B = A + 2;   // works
    Number C = 2 + A;   // also works now

    //<< overloaded
    cout << A << endl;

    B.display();  // 7
    C.display();  // 7
    return 0;
}

// class Number {
//     int n;
// public:
//     Number(int n=0) : n(n) {}
//
//     Number operator+(int x) {       // member overload
//         return Number(n + x);
//     }
// };
//
// int main() {
//     Number A(5), B(10);
//
//     Number C = A + 2;   // ✅ works (A is object → invokes member function)
//     Number D = 2 + A;   // ❌ error (2 is not an object, can’t call operator+)
// }
//
