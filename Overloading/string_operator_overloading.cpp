//
// Created by Apple on 16/09/25.
//
#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char* str;
public:
    MyString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy constructor
    MyString(const MyString& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    // Destructor
    ~MyString() { delete[] str; }

    // Operator+ for concatenation
    MyString operator+(const MyString& other) {
        char* temp = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(temp, str);
        strcat(temp, other.str);
        MyString result(temp);
        delete[] temp;
        return result;
    }

    // Friend << for printing
    friend ostream& operator<<(ostream& out, const MyString& s) {
        out << s.str;
        return out;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2("World");

    MyString s3 = s1 + MyString(" ") + s2;
    cout << s3 << endl;

    return 0;
}
