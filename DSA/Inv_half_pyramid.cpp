#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of lines you want to print" << endl;
    cin >> n;
    cout << "\n\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "\t";
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}