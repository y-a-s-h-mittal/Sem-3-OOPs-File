#include <iostream>
using namespace std;
template <class T>
class Compare
{
    T a, b;

public:
    Compare(T x, T y)
    {
        a = x;
        b = y;
        cout << "Constructor called" << endl;
    }
    void bigger()
    {
        if (a > b)
            cout << "Bigger number is: " << a << endl;
        else if (b > a)
            cout << "Bigger number is: " << b << endl;
        else
            cout << "Both numbers are equal" << endl;
    }
    ~Compare()
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    Compare<int> obj1(10, 20);
    obj1.bigger();
    Compare<float> obj2(5.5, 3.2);
    obj2.bigger();
    return 0;
}