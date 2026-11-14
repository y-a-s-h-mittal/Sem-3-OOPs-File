#include <iostream>
using namespace std;
void interchange(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int &modify(int &x)
{
    return x;
}

int main()
{
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    interchange(a, b);

    cout << "After interchange: " << a << " " << b << endl;

    modify(a) = 100;

    cout << "After modifying returned reference: " << a;

    return 0;
}
