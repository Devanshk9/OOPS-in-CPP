//
// Created by Apple on 07/09/25.
//
#include<iostream>
#include<string>

using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

};
class Student: public Person {
public:
    int rollno;
    void getinfo() {
        cout<<"name :"<<this->name<<endl;

        cout<<"rollno :"<<this->rollno<<endl;
    }
    Student(string name, int age, int rollno) : Person(name,age) {
        this->rollno = rollno;
    }
};

int main() {
    Student s1("rahul",21,70);
    // s1.name = "rahul";
    // s1.age = 21;
    // s1.rollno = 23;
    s1.getinfo();


    return 0;
}
