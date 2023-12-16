#include <iostream>
using namespace std;

class intflo
{
private:
    int a;
    float b;

public:
    intflo()
    {
        a = 0;
        b = 0;
    }
    intflo(int r, float i)
    {
        a = r;
        b = i;
    }

    void print()
    {

        cout << "The integer is " << a << "The float is " << b;
    }

    intflo operator-(intflo d)
    {

        intflo temp;
        temp.a = a - d.a;
        temp.b = b - d.b;
        return temp;
    }
};

int main()
{

    intflo i1(6, 7);
    intflo i2(3, 5);
    intflo i3(3, 2);

    intflo i4 = i1 - i2;
    i4.print();

    return 50;
}