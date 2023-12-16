#include <iostream>
using namespace std;
int main()
{
    int n, maxindex, maxno;
    cout << "Enter size of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << endl;
        cin >> arr[i];
    }
    cout << "Enter the index to which you wantto check the maximum " << endl;
    cin >> maxindex;
    if (maxindex > n)
    {
        cout << "Invalid input" << endl;
    }
    else
    {
        for (int i = 0; i < maxindex; i++)
        {
            if (arr[i + 1] > arr[i])
            {
                maxno = arr[i];
            }
        }
        cout << maxno << endl;
    }
    return 0;
}