//
// Created by Apple on 12/09/25.

#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
    int x;
public:
    A(int val) : x(val) {}
    // Declare one function as friend
    friend void showSum(const A& a, const B& b);
};

class B {
    int y;
public:
    B(int val) : y(val) {}
    // Same function declared friend here too
    friend void showSum(const A& a, const B& b);
};

// Definition of friend function
void showSum(const A& a, const B& b) {
    cout << "Sum = " << a.x + b.y << endl; // can access private x and y
}

int main() {
    A obj1(10);
    B obj2(20);

    showSum(obj1, obj2); // Works!
    return 0;
}

//
// #include <iostream>
// using namespace std;
//
// class Box {
// private:
//     int length = 10;
// public:
//     // Friend function declaration
//     friend void printLength(Box b);
// };
//
// void printLength(Box b) {
//     cout << "Length = " << b.length << endl;  // can access private member
// }
//
// int main() {
//     Box box;
//     printLength(box);   // works fine
//     return 0;
// }
