#include <iostream>
#include <string>
using namespace std;
class Employee
{
    int id;
    string name;
    string department;
    float salary;

public:
    // Parameterized constructor
    Employee(int i, string n, string d, float s)
    {
        id = i;
        name = n;
        department = d;
        salary = s;
    }

    void display()
    {
        cout << "\nEmployee Details:" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    int id;
    string name, department;
    float salary;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Department: ";
    cin >> department;
    cout << "Enter Salary: ";
    cin >> salary;
    Employee e(id, name, department, salary);
    e.display();
    return 0;
}