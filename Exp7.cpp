#include <iostream>
using namespace std;
inline int square(int n)
{
    return n * n;
}
inline int cube(int n)
{
    return n * n * n;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square = " << square(n) << endl;
    cout << "Cube = " << cube(n);
    return 0;
}