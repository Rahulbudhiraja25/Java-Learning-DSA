// * * * * *
// * * * * * *
// * *     * *
// * *     * *
// * * * * * *
// * * * * * *
// * *     * *
// * *     * *
// * * * * * *
// * * * * *

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            if (i == 1 && j == 6 || i == 10 && j == 6)
            {
                cout << " ";
            }
            else if (i == 3 && j == 3 || i == 3 && j == 4 || i == 4 && j == 3 || i == 4 && j == 4 || i == 7 && j == 3 || i == 7 && j == 4 || i == 8 && j == 3 || i == 8 && j == 4)
            {
                cout << "  ";
            }

            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}