//
// Created by Apple on 12/09/25.
//
#include <iostream>
using namespace std;

class Counter {
private:
    static int count;
public:
    Counter() {
        count++;
    }

    // A static function can only access static members
    static void showCount() {   // Static member function
        cout << "Object count = " << count << endl;
    }
};

// Definition (and initialization) of static member
int Counter::count;

int main() {
    Counter c1, c2, c3;
    Counter::showCount();   // Access via class name
    c2.showCount();         // Access via object (also works)
    return 0;
}
