#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 11; i++)
    {
        if (i == 1)
        {
            cout << "";
        }
        else
        {
            cout << "* *" << endl;
        }
        if (i == 1 || i == 2 || i == 5 || i == 6 || i == 9 || i == 10)
        {
            for (int j = 1; j < 9; j++)
            {
                cout << "* ";
            }
        }
    }
    return 0;
}