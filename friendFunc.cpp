//
// Created by Apple on 12/09/25.
//
#include <iostream>
using namespace std;

class Box {
private:
    int length = 10;
public:
    // Friend function declaration
    friend void printLength(Box b);
};

void printLength(Box b) {
    cout << "Length = " << b.length << endl;  // can access private member
}

int main() {
    Box box;
    printLength(box);   // works fine
    return 0;
}
