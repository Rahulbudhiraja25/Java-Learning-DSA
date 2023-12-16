// Print Pattern
//     *
//    **
//   ***
//  ****
// *****

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of lines you want to print\n";
    cin >> n;
    int k = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < k; j++)
        {
            cout << " ";
        }
        for (int j = k; j <= n; j++)
        {
            cout << "*";
        }
        k--;
        cout << endl;
    }
    return 0;
}