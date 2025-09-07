//
// Created by Apple on 07/09/25.
//
#include <iostream>
#include <cstring>
using namespace std;

class Marks {
private:
    int* scores;   // pointer to marks array
    int size;

public:
    // Constructor
    Marks(int n, int initValue = 0) {
        size = n;
        scores = new int[size];
        for (int i = 0; i < size; i++) {
            scores[i] = initValue;
        }
    }

    // ❌ Shallow Copy Constructor
    // Marks(const Marks& m) : scores(m.scores), size(m.size) {}

    // ✅ Deep Copy Constructor
    Marks(const Marks& m) {
        size = m.size;
        scores = new int[size];       // new marksheet
        for (int i = 0; i < size; i++) {
            scores[i] = m.scores[i];  // copy all marks
        }
    }

    // Set a specific subject’s marks
    void setMark(int index, int value) {
        if (index >= 0 && index < size)
            scores[index] = value;
    }

    // Print marksheet
    void print() const {
        for (int i = 0; i < size; i++) {
            cout << scores[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~Marks() {
        delete[] scores;
    }
};

int main() {
    Marks studentA(3);        // 3 subjects
    studentA.setMark(0, 90);  // Math
    studentA.setMark(1, 85);  // Physics
    studentA.setMark(2, 80);  // Chemistry

    Marks studentB(studentA); // Deep copy -> separate marksheet

    cout << "Before change:" << endl;
    cout << "Student A: "; studentA.print();
    cout << "Student B: "; studentB.print();

    // Change Student A's Physics marks
    studentA.setMark(1, 95);

    cout << "\nAfter change:" << endl;
    cout << "Student A: "; studentA.print();
    cout << "Student B: "; studentB.print();

    return 0;
}
