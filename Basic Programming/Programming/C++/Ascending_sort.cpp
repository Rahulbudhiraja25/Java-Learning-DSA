#include <iostream>
using namespace std;
int main()
{
    int a[8];
    int b = sizeof(a) / sizeof(int);
    // cout<<b;
    for (int i = 0; i < b; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < b; i++)
    {
        for (int j = i + 1; j < b; j++)
        {

            if (a[i] > a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "Array is :";
    for (int i = 0; i < b; i++)
    {
        cout << a[i];
    }

    return 0;
}