//
// Created by Apple on 16/09/25.
//

#include<iostream>

using namespace std;

class Number {
public:
    int n;
    Number (int n) {
        this->n = n;
    }

    //friend overloading
    friend Number operator+(const Number &num1, const Number &num2);

    //pre
    Number & operator++() {
        n++;
        return *this;
    }

    Number & operator++(int) {
        auto temp = *this;
        n++;
        return temp;
    }


};

Number operator+(const Number &num1, const Number &num2) {
    cout<<num1.n<<endl;
    cout<<num2.n<<endl;
    return Number(num1.n + num2.n);
}

int main() {
    Number n1(10);
    Number n2(20);

    ++n1;

    Number n3 = n1+n2;
    // called like: n1 + n2  -> operator+(n1, n2)
    // both operands passed explicitly

    cout<<n3.n<<endl;

    Number a(5);

    Number b = ++a; // pre-increment: a=6, b=6
    cout << "a=" << a.n << ", b=" << b.n << endl;

    Number c = a++; // post-increment: a=7, c=6
    cout << "a=" << a.n << ", c=" << c.n << endl;

    return 0;
}