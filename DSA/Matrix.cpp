#include <iostream>
using namespace std;
int main()
{
    int r, c, sn;
    cout << "Enter Number Of Rows in Matrix\n";
    cin >> r;
    cout << "Enter Number Of Coloumns in Matrix\n";
    cin >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter element [" << i << "] [" << j << "]" << endl;
            cin >> arr[i][j];
        }
    }
    // Printing Matrix
    //  cout<<"*******************Matrix is ************************************ \n\n";
    //  for (int i = 0; i < r; i++)
    //  {
    //      for (int j = 0; j < c; j++)
    //      {
    //         cout<<arr[i][j]<<"  ";
    //      }
    //      cout<<endl;
    //  }
    // Searching in Matrix
    bool flag = false;
    cout << "Enter a number you want to search" << endl;
    cin >> sn;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == sn)
            {
                cout << i << " " << j << endl;
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "Element is found" << endl;
    }
    else
    {
        cout << "Element is not present in the array" << endl;
    }
}