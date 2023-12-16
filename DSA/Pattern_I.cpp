// Program to print the Pattern
// *****************
//         *
//         *
//         *
//         *
//         *
//         *
//         *
//         *
// ******************

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 19; i++)
//     {

//         cout << "*";
//     }
//     for (int i = 0; i < 9; i++)
//     {

//         cout << endl << "\t*";
//     }
//     cout<<"\n";
//     for (int i = 0; i < 19; i++)
//     {

//         cout << "*";
//     }
//     return 0;
// }
// **************************************************************************************************

// Program to print the Pattern

//        ***
//        ***

//       *****
//       *****
//       *****
//       *****
//       *****
//       *****
//       *****
//       *****

// *******************************************************************************************************
// Alternative Solution
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i < 3; i++)
//     {
//         cout << "\t ***\n";
//     }
//     cout << "\n";
//     for(int i=1;i<9;i++){

//     cout<<"\t*****\n";

//     }
//     return 0;
// }
// SOlUTION
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 3; i++)
    {
        cout << "\t ";
        for (int j = 1; j < 4; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
    for (int i = 3; i < 11; i++)
    {
        cout << "\t";
        for (int j = 1; j < 6; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
    return 0;
}