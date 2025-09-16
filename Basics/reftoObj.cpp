//
// Created by Apple on 10/09/25.
//
#include <iostream>

using namespace std;

class Foo {
public:
    int& bar() {
        return obj;
    }
private:
    int obj = 42;
};

int main() {
    Foo foo;
    foo.bar() = 50;
    cout << foo.bar() << '\n';
}
