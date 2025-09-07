//
// Created by Apple on 07/09/25.
//
#include<iostream>
#include<string>

using namespace std;

class Teacher{

private:
    double salary;
public:
    // If we create a object without parameter then this is neccesary to be there rest you can add parameterized too
    // Constructor overeloading is a type of polymorphism
    Teacher() {
        // Every Teacher will have department as CSE by default
        // Same as Class name
        // Memory is allocated when a constructor is called
        // Called automatically when a new obj is being created
        // can be called during object creation only
        // Never public
        department = "CSE";
        cout<<"New Teacher is Created"<<endl;
    }
    //parameterized
    Teacher(string n ,string d,string s, double sal) {
        name = n;
        department = d;
        subject = s;
        salary = sal;
    }
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
    Teacher krupa("Krupa", "CSE", "OS", 3323231.32);
    Teacher manjunath;

    manjula.name = "Manjula";
    // manjula.department = "IoT";
    manjula.subject = "Cyber Security";
    manjula.setSalary(100000.222);
    manjula.printSalary();

    // krupa.name = "Krupa";
    // // krupa.department = "IoT";
    // krupa.subject = "Operating System";
    // krupa.setSalary(1002200.222);
    krupa.printSalary();

    manjunath.name = "Manjunath";
    // manjunath.department = "CSE";
    manjunath.subject = "Cryptography";
    manjunath.setSalary(100323200.222);
    manjunath.printSalary();
    cout<<manjula.department;
    cout<<manjunath.department;

    return 0;
}