#include <iostream>
using namespace std;
class Demo
{
    int num;

public:
    Demo(int n)
    {
        num = n;
        cout << "Constructor called for Object " << num << endl;
    }
    ~Demo()
    {
        cout << "Destructor called for Object " << num << endl;
    }
};
int main()
{
    Demo obj1(1);
    Demo obj2(2);
    Demo obj3(3);
    cout << "Inside main function." << endl;
    return 0;
}