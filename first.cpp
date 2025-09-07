//
// Created by Apple on 07/09/25.
//
#include<iostream>
#include<string>

using namespace std;

// Defining a class never makes memory but objects do
class Teacher{

private:
    double salary;
public:
    string name;
    string department;
    string subject;

    //methods//member functions
    //setter
    void setSalary(double s){
        this->salary = s;
    }
    //getter is that returns
    void printSalary(){
        cout<<this->salary<<endl;
    }
};

int main(){
    Teacher manjula;
    Teacher krupa;
    Teacher manjunath;

    manjula.name = "Manjula";
    manjula.department = "IoT";
    manjula.subject = "Cyber Security";
    manjula.setSalary(100000.222);
    manjula.printSalary();

    krupa.name = "Krupa";
    krupa.department = "IoT";
    krupa.subject = "Operating System";
    krupa.setSalary(1002200.222);
    krupa.printSalary();

    manjunath.name = "Manjunath";
    manjunath.department = "CSE";
    manjunath.subject = "Cryptography";
    manjunath.setSalary(100323200.222);
    manjunath.printSalary();

    return 0;
}