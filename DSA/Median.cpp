#include <iostream>
using namespace std;
int main()
{   int temp;
    int arr[10];
    int soarr[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter element " << i << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }

    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<<" ";
    }
}