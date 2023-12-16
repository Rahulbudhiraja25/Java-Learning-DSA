#include <iostream>
using namespace std;
int quickSort(int arr[], int n)
{
    int array[n], temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    return arr[n];
}
int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter number of elements in array " << endl;
    cin >> n;
    int arr[n], array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << endl;
        cin >> arr[i];
    }
    array[n] = quickSort(arr, n);
    int key;
    cout << "Enter number you want to search in array" << endl;
    cin >> key;

    cout << binarySearch(array, n, key);
    return 0;
}