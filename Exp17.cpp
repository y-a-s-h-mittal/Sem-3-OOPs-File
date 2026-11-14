#include <iostream>
#include <string>
using namespace std;
class Student
{
    int rollNo;
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter name: ";
        getline(cin >> ws, name);
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display()
    {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid number of students.";
        return 0;
    }
    Student *s = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        s[i].input();
    }
    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }
    delete[] s;
    s = nullptr;
    return 0;
}