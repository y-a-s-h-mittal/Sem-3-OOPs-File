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
        cout << rollNo << "\t"
             << name << "\t"
             << marks << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[100];

    cout << "\nEnter student details:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].accept();
    }

    cout << "\nStudent Details:\n";
    cout << "Roll No.\tName\tMarks\n";

    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }

    return 0;
}