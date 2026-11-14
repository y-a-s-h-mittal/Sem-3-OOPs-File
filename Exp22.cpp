#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    int rollNo;
    string name;

public:
    void inputStudent()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter student name: ";
        getline(cin >> ws, name);
    }
};
class Examination : public Student
{
protected:
    float m1, m2, m3;

public:
    void inputMarks()
    {
        cout << "Enter marks in Subject 1: ";
        cin >> m1;
        cout << "Enter marks in Subject 2: ";
        cin >> m2;
        cout << "Enter marks in Subject 3: ";
        cin >> m3;
    }
};
class Result : public Examination
{
public:
    void displayResult()
    {
        float total = m1 + m2 + m3;
        float percentage = total / 3.0f;
        cout << "\n--- Student Result ---\n";
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Subject 1: " << m1 << endl;
        cout << "Subject 2: " << m2 << endl;
        cout << "Subject 3: " << m3 << endl;
        cout << "Total Marks: " << total << " / 300\n";
        cout << "Percentage: " << percentage << "%\n";
    }
};
int main()
{
    Result r;
    r.inputStudent();
    r.inputMarks();
    r.displayResult();
    return 0;
}