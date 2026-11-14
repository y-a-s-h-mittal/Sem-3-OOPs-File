#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
class Student
{
public:
    char name[50];
    int age;
    char sex[10];
    float height, weight;
};
int main()
{
    Student s, temp;
    cout << "Enter student name: ";
    cin.getline(s.name, 50);
    cout << "Enter age: ";
    cin >> s.age;
    cout << "Enter sex: ";
    cin >> s.sex;
    cout << "Enter height: ";
    cin >> s.height;
    cout << "Enter weight: ";
    cin >> s.weight;
    ofstream fout("student.dat", ios::binary);
    fout.write((char *)&s, sizeof(s));
    fout.close();
    ifstream fin("student.dat", ios::binary);
    fin.read((char *)&temp, sizeof(temp));
    cout << "\nStudent Information\n";
    cout << "Name: " << temp.name << endl;
    cout << "Age: " << temp.age << endl;
    cout << "Sex: " << temp.sex << endl;
    cout << "Height: " << temp.height << endl;
    cout << "Weight: " << temp.weight << endl;
    fin.close();
    return 0;
}