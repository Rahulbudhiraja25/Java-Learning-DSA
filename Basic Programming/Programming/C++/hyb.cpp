#include <iostream>
using namespace std;
class A
{
public:
    void printa()
    {
        cout << "A class";
    }
};
class B : public A
{
public:
    void printb()
    {
        cout << "B class";
    }
};
class C : public B
{
public:
    void printc()
    {
        cout << "C class";
    }
};
class D : public B
{
public:
    void printd()
    {
        cout << "D class";
    }
};
int main()
{
    C c1;
    D d1;
    c1.printa();
    c1.printb();
    c1.printc();
    d1.printd();
    d1.printb();
    return 0;
}