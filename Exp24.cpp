#include <iostream>
using namespace std;
template <class T>
T square(T num)
{
    return num * num;
}
int main()
{
    int a = 5;
    float b = 4.5;
    double c = 6.25;
    cout << "Square of integer: " << square(a) << endl;
    cout << "Square of float: " << square(b) << endl;
    cout << "Square of double: " << square(c) << endl;
    return 0;
}