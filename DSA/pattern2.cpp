// Diamond Pattern Logic
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        printf("\t");
        for (int j = 1; j <= 4 - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 4; i >= 1; i--)
    {
        cout << "\t";
        for (int j = 1; j <= 4 - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}