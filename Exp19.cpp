#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string line;

    ofstream fout("student.txt");
    if (!fout)
    {
        cout << "Error creating file.";
        return 1;
    }
    fout << "Welcome to C++ File Handling.\n";
    fout << "This is the original content.\n";
    fout.close();
    cout << "Data written successfully.\n";
    ofstream app("student.txt", ios::app);
    if (!app)
    {
        cout << "Error opening file for appending.";
        return 1;
    }
    app << "This line is appended to the file.\n";
    app.close();
    cout << "Data appended successfully.\n";

    ifstream fin("student.txt");
    if (!fin)
    {
        cout << "Error opening file for reading.";
        return 1;
    }
    cout << "\nContents of the file:\n";
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
    return 0;
}