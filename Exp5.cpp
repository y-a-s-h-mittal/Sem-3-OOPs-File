#include <iostream>
#include <string>
using namespace std;
class Student
{
    int rollNo;
    string name;
    float marks;

public:
    void accept()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display()
    {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks;
    }
};
int main()
{
    Student s;
    s.accept();
    s.display();
    return 0;
}