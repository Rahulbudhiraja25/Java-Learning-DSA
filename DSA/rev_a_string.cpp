#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter number of elements you want to store in a string" << endl;
    cin >> size;
    char stra[size], strb[size];
    for (int i = 0; i < size; i++)
    {
        cin >> stra[i];
    }
    for (int i = size; i >= 0; i--)
    {
        for (int j = 0; j < size; j++)
        {
            strb[j] = stra[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << strb[i];
    }
    return 0;
}