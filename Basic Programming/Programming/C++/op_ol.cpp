// Binary Operator overloading
#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    void print()
    {
        cout << real << "+" << imag << "i" << endl;
    }
    Complex operator+(Complex d)
    {
        Complex temp;
        temp.real = real + d.real;
        temp.imag = imag + d.imag;
    }
};
int main()
{
    Complex c1(22, 2);
    Complex c2(2, 2);
    Complex c3(4, 2);
    Complex c4;
    c4 = c1 + c2 + c3;
    c4.print();
    return 0;
}