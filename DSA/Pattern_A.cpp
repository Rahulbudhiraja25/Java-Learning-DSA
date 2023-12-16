// Pattern A
//         *
//        * *
//       *   *
//      *     *
//     *********
//    *         *
//   *           *
//  *             *

#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    for (int i = 0; i < n; i++)
    {

        // Inner for loop for logic execution
        for (int j = 0; j <= n / 2; j++)
        {

            // prints two column lines
            if ((j == 0 || j == n / 2) && i != 0 ||

                // print first line of alphabet
                i == 0 && j != 0 && j != n / 2 ||

                // prints middle line
                i == n / 2)
                cout << "*";
            else
                cout << " ";
        }

        cout << '\n';
    }

    return 0;
}
