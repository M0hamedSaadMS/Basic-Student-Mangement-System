#include <iostream>
#include <algorithm>
#include "addStudent.h"
using namespace std;

int main() {
    addStudent students[100]; 
    int studentCount = 0;
    int choice;
    string studentName, major;
    int id, year;
    double gpa;
    string again = "yes";

    while (again == "yes") {
        cout << "=====Student Management System=====" << endl;
        cout << "1) Add Student" << endl;
        cout << "2) Display All Students" << endl;
        cout << "3) Search Student By Id." <<endl;
        cout << "4) Top Student."<<endl;
        cout << "5) Exit" << endl;
        cout << "Choice = ";
        cin >> choice;

        if (choice == 1) {
            cin.ignore();
            cout << "Enter Student Name: ";
            cin >>studentName;
            cout << "Enter Major: ";
            cin >>major;
            cout << "Enter Id: ";
            cin >> id;
            cout << "Enter Year: ";
            cin >> year;
            cout << "Enter Gpa: ";
            cin >> gpa;

            students[studentCount] = addStudent(studentName, major, id, year, gpa);
            studentCount++;

            cout << "Wanna another choice : ";
            cin >>again;

        } else if (choice == 2) {
            for (int i = 0; i < studentCount; i++) {
                students[i].displayInfo();
                cout << "-------------------" << endl;

                 cout << "Wanna another choice : ";
            cin >>again;
            }

          } else if (choice == 3) {
          cout << "Enter Id: ";
          cin >> id;

         bool found = false;
          for (int i = 0; i < studentCount; i++) {
         if (students[i].getId() == id) {  
            students[i].displayInfo();
            found = true;
            break;
        }
    }
         if (!found) {
        cout << "Student Not Found." << endl;
    }
    cout << "Wanna another choice : ";
            cin >>again;
          }else if (choice == 4){
            int topStudent = 0;
            cout << "=====Top Student====="<<endl;
            for (int i = 1 ; i<studentCount ; i++){
                if (students[i].getGpa()>students[topStudent].getGpa()){
                    topStudent = i;
                }
            }
            cout << "Top Student is : "<< students[topStudent].getName()<<endl;
            cout << "Wanna another choice : ";
            cin >>again;
          }
          else if (choice == 5) {
            break;
        }
    }

    cout << "GoodBye!" << endl;
    return 0;
}