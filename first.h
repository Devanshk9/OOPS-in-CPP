//
// Created by Apple on 07/09/25.
//
#include<iostream>
#include<string>

using namespace std;


class Teacher{
    //properties
    string name;
    string department;
    string subject;
    double salary;

    //methods//member functions
    void changeDept(string newDept){
        dapartment = newDept;
    }

};

int main(){
    Teacher manjula;
    Teacher krupa;
    Teacher manjunath;
    manjula.salary = 123000;

    return 0;
}