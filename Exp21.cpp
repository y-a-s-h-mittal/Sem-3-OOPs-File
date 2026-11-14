#include <iostream>
#include <cstring>
using namespace std;
class String
{
    char *str;

public:
    String(const char *s)
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
        cout << "Memory allocated.\n";
    }
    void display()
    {
        cout << "String: " << str << endl;
    }
    ~String()
    {
        delete[] str;
        cout << "Memory released.\n";
    }
};
int main()
{
    String s("Hello C++ Programming");
    s.display();
    return 0;
}