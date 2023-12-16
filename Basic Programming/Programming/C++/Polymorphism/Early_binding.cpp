// Function Overloading
#include <iostream>
using namespace std;
class multiply
{
public:
    void mp()
    {
        cout << "No Input";
    }
    int mp(int a, int b)
    {
        int c;
        c = a * b;
        return c;
    };

    double mp(double a, double b)
    {
        double c;
        c = a * b;
        return c;
    };

    int mp(int a, int b, int d)
    {
        int c;
        c = a * b * d;
        return c;
    };

    double mp(double a, double b, double d)
    {
        double c;
        c = a * b * d;
        return c;
    };
};
int main()
{
    float result;
    multiply m1;
    result = m1.mp(5, 2, 4);
    cout << "The multiply is " << result;
    return 0;
}
