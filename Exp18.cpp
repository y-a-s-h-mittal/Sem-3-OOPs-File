#include <iostream>
#include <string>
using namespace std;
class Employee
{
    int empId;
    string empName;

public:
    void inputEmployee()
    {
        cout << "Enter employee ID: ";
        cin >> empId;
        cout << "Enter employee name: ";
        getline(cin >> ws, empName);
    }
    void displayEmployee()
    {
        cout << "\nEmployee ID: " << empId;
        cout << "\nEmployee Name: " << empName << endl;
    }
};
class Department
{
    int deptId;
    string deptName;
    Employee emp;

public:
    void inputDepartment()
    {
        cout << "Enter department ID: ";
        cin >> deptId;
        cout << "Enter department name: ";
        getline(cin >> ws, deptName);
        emp.inputEmployee();
    }
    void displayDepartment()
    {
        cout << "\nDepartment ID: " << deptId;
        cout << "\nDepartment Name: " << deptName;
        cout << "\n--- Employee Details ---";
        emp.displayEmployee();
    }
};
int main()
{
    Department d;
    d.inputDepartment();
    cout << "\n--- Department Details ---\n";
    d.displayDepartment();
    return 0;
}