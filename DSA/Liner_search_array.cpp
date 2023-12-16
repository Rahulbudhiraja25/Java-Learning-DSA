#include <iostream>
using namespace std;
int main()
{
    int n, se, decision, position;
    cout << "Enter size of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << endl;
        cin >> arr[i];
    }

    cout << "Enter the element you wnt to search" << endl;
    cin >> se;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == se)
        {
            decision = 1;
            position = i;
            break;
        }
        else
        {
            decision = -1;
        }
    }
    if (decision == 1)
    {
        cout << "The element " << se << " is present in array at " << position << "position" << endl;
    }
    else
    {
        cout << "The element is not present in the array" << endl;
    }
    return 0;
}