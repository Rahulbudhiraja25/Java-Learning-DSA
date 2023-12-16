#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "const";
    }
};
int main()
{
    A a1;

    return 0;
}