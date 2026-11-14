#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
class String
{
    char str[100];

public:
    String() { str[0] = '\0'; }
    String(const char s[]) { strcpy(str, s); } // Overload + operator
    String operator+(String s)
    {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }                                                // Overload = operator
    void operator=(String s) { strcpy(str, s.str); } // Overload <= operator
    bool operator<=(String s) { return strcmp(str, s.str) <= 0; }
    void length() { cout << "Length = " << strlen(str) << endl; }
    void tolower()
    {
        for (int i = 0; str[i] != '\0'; i++)
            str[i] = std::tolower(str[i]);
    }
    void toupper()
    {
        for (int i = 0; str[i] != '\0'; i++)
            str[i] = std::toupper(str[i]);
    }
    void display() { cout << str << endl; }
};
int main()
{
    String s1("Hello");
    String s2("World");
    String s3 = s1 + s2;
    cout << "Concatenated string: ";
    s3.display();
    cout << "Length of string: ";
    s3.length();
    String s4;
    s4 = s1;
    cout << "Copied string: ";
    s4.display();
    cout << "Comparison (s1 <= s2): ";
    cout << (s1 <= s2 ? "True" : "False") << endl;
    s3.tolower();
    cout << "Lowercase: ";
    s3.display();
    s3.toupper();
    cout << "Uppercase: ";
    s3.display();
    return 0;
}