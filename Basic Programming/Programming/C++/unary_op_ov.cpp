#include <iostream>
using namespace std;
class Distance
{
public:
    int feet;
    int inch;
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    void operator+()
    {
        feet++;
        inch++;
        cout << feet << "Feet" << inch << "inches" << endl;
    }
};
int main()
{
    Distance d1(2, 4);
    d1.operator+();
    return 0;
}