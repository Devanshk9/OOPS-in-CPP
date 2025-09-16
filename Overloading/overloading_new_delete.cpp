//
// Created by Apple on 16/09/25.
//
#include <iostream>
#include <cstdlib>
using namespace std;

class MyClass {
    int x;
public:
    MyClass(int val = 0) : x(val) {
        cout << "Constructor called, x = " << x << endl;
    }
    ~MyClass() {
        cout << "Destructor called, x = " << x << endl;
    }

    // Overload operator new
    // size is automatically passed and constructor too is automatically called
    void* operator new(size_t size) {
        cout << "Custom new: allocating " << size << " bytes" << endl;
        void* p = malloc(size);  // raw allocation
        if (!p) throw bad_alloc();
        return p;
    }

    // Overload operator delete
    void operator delete(void* p) {
        cout << "Custom delete: freeing memory" << endl;
        free(p);
    }
};

int main() {
    MyClass* obj = new MyClass(42); // calls custom new + constructor
    delete obj;                     // calls destructor + custom delete
    return 0;
}
