//
// Created by Apple on 12/09/25.
//
#include <iostream>
using namespace std;

class Student {
private:
    const int roll;   // const data member
public:
    Student(int r) : roll(r) {}   // must use initializer list
    //cant modify any other member
    void display() const {
        cout << "Roll number = " << roll << endl;
    }
};

int main() {
    Student s1(101), s2(102);
    s1.display();   // Roll number = 101
    s2.display();   // Roll number = 102
}
