#ifndef ADDSTUDENT_H
#define ADDSTUDENT_H

#include <iostream>
#include <string>
using namespace std;

class addStudent {
private:
    string studentName;
    string major;
    int id;
    int year;
    double gpa;

public:
    static int totalStudents;

    addStudent() {} 

    addStudent(string studentName, string major, int id, int year, double gpa) {
        this->studentName = studentName;
        this->major = major;
        this->id = id;
        this->year = year;
        this->gpa = gpa;
        totalStudents++;
    }

    void displayInfo() {
        cout << "Student Name: " << studentName << endl;
        cout << "Major: " << major << endl;
        cout << "Id: " << id << endl;
        cout << "Year: " << year << endl;
        cout << "Gpa: " << gpa << endl;
    }

    int getId() {
    return id;
}
double getGpa(){
    return gpa;
}
    string getName (){
        return studentName;
    }

};
int addStudent::totalStudents = 0;

#endif