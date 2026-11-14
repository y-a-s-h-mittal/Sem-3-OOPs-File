#include <iostream>
#include <string>
using namespace std;

class Student
{
    int rollNo;
    string name;
    float marks;

public:
    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    Student(const Student &s)
    {
        rollNo = s.rollNo;
        name = s.name;
        marks = s.marks;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    int rollNo;
    string name;
    float marks;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    Student s1(rollNo, name, marks);
    Student s2(s1);

    cout << "\nOriginal Student Details:" << endl;
    s1.display();

    cout << "\nCopied Student Details:" << endl;
    s2.display();

    return 0;
}