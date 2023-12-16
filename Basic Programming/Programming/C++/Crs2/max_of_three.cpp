#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter first number" << endl;
    cin >> a;

    cout << "Enter second number" << endl;
    cin >> b;

    cout << "Enter third number" << endl;
    cin >> c;

    if (a > b && a > c)
    {

        cout << "A is greatest\n";
    }
    else if (b > c)
    {

        cout << "B is greatest\n";
    }
    else
        cout << "C is greatest\n";
    return 0;
}