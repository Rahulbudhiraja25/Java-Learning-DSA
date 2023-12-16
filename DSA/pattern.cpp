// Write a program to print rectangle pattern

// #include <iostream>
// using namespace std;
// int main()
// {
//     int r = 4, c = 7;
//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= c; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Write a program to print hollow rectangle pattern

#include <iostream>
using namespace std;
int main()
{
    int r = 15, c = 25;
    for (int i = 1; i <= r; i++)
    {
        cout << "\t\t\t";
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || j == 1 || i == r || j == c)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}