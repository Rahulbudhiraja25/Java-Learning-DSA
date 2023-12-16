// Print Pattern
// For n=4

// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     for (int i = 1; i <= n * 2; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <= (2 * n - 2 * i); j++)
//         {
//             cout << " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int r, i, j;
    cout << "Enter no. of rows: ";
    cin >> r;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "*";
        for (j = 1; j <= 2 * (r - i); j++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
    for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            cout << "*";
        for (j = 1; j <= 2 * (r - i); j++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}