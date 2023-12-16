// This program is used to print palondromic pattern
//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5

// Spaces = 9, 7 ,5,3,1
// coloum =3
// 1 for space
// 1 for numbers
// 1 for pattern of printing

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number for which you want to run the loop\n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int k = i;
        for (; j <= n; j++)
        {
            cout << k--;
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << k++;
        }
        cout << endl;
    }
    return 0;
}