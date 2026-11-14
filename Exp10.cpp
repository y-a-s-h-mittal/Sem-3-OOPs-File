#include <iostream>
using namespace std;
class Complex
{
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int x)
    {
        real = x;
        imag = x;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main()
{
    int r1, i1, r2, i2;
    Complex c1;
    Complex c2(5);
    Complex c3(3, 4);

    cout << "Default Constructor: ";
    c1.display();

    cout << "One-Argument Constructor: ";
    c2.display();

    cout << "Two-Argument Constructor: ";
    c3.display();

    cout << "\nEnter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;

    Complex a(r1, i1);
    Complex b(r2, i2);

    Complex sum = a.add(b);

    cout << "\nFirst Complex Number: ";
    a.display();
    cout << "Second Complex Number: ";
    b.display();
    cout << "Sum of Complex Numbers: ";
    sum.display();
    return 0;
}