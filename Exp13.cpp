#include <iostream>
using namespace std;
class Number2;
class Number1
{
    int a;

public:
    Number1(int x) { a = x; }
    friend void greatest(Number1, Number2);
};
class Number2
{
    int b;

public:
    Number2(int y) { b = y; }
    friend void greatest(Number1, Number2);
};
void greatest(Number1 n1, Number2 n2)
{
    if (n1.a > n2.b)
        cout << "Greatest number = " << n1.a;
    else
        cout << "Greatest number = " << n2.b;
}
int main()
{
    Number1 n1(25);
    Number2 n2(40);
    greatest(n1, n2);
    return 0;
}