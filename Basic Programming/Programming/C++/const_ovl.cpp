#include <iostream>
using namespace std;
class var
{
public:
    int a, b;
    ~var()
    {
        cout << "Parameterised Constructor" << endl;
    }
    var()
    {
        int a = 2, b = 3;
        cout << a + b << endl;
    }

    void op()
    {

        cout << "Middle of program" << endl;
    }
};
int main()
{

    var v1;
    v1.op();
    var v2;
    v2.op();
    return 0;
}