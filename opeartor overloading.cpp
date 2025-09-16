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
    Number operator + (const Number &num) {
        cout<<this->n<<endl;
        cout<<num.n<<endl;
        return Number(this->n+num.n);
    }

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

int main() {
    Number n1(10);
    Number n2(20);
    ++n1;
    Number n3 = n1+n2;
    //Actually get called like this so this
    // Number n3=n1.operator+(n2);

    cout<<n3.n<<endl;

    Number a(5);

    Number b = ++a; // pre-increment: a=6, b=6
    cout << "a=" << a.n << ", b=" << b.n << endl;

    Number c = a++; // post-increment: a=7, c=6
    cout << "a=" << a.n << ", c=" << c.n << endl;

    return 0;
}