#include <iostream>
using namespace std;
class Distance
{
public:
    int feet, inch;

    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    Distance operator+()
    {

        feet++;
        inch++;
    }
};
int main()
{
    Distance d1(8, 9);
    +d1;
    cout << d1.feet << "  " << d1.inch << endl;
    return 0;
}