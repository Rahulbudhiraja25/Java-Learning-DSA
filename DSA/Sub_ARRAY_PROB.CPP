#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int num;
    cout << "Enter size of an array\n";
    cin >> num;
    int arr[num];
    for (int j = 0; j < num; j++)
    {
        cout << "Enter element " << j + 1 << " of array\n";
        cin >> arr[j];
    }
    int maxSum = INT_MIN;
    for (int i = 0; i < num; i++)
    {
        for (int j = i; j < num; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                // cout << arr[k] << " ";
            }
            maxSum = max(maxSum, sum);
            // cout << endl;
        }
    }
    cout << maxSum;
    return 0;
}