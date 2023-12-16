// Write a program to find whether a given number is less than equalto or more than 10

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number\n";
//     cin >> n;

//     if (n < 10)
//     {
//         cout << "NUmber is less than 10\n";
//     }

//     else if (n = 10)
//     {
//         cout << "NUmber is equal to 10\n";
//     }

//     else
//     {
//         cout << "NUmber is greaterr than 10\n";
//     }
//     return 0;
// }

// Write a program to find out whether a given number is divisible by 2 or 3 or divisible by both
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "Number is divisible by both" << endl;
    }
    else if (n % 2 == 0)
    {
        cout << "Number is divisible by only 2" << endl;
    }
    else if (n % 3 == 0)
    {
        cout << "Number is divisible by only 3" << endl;
    }
    else
    {
        cout << "Number is neither divisble by two nor divisible  by 3" << endl;
    }
    return 0;
}