#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> num={1,2,56};
    int i, integer;
    cout << "Enter the number of inputs you want to add" << endl;
    cin >> i;
    for (int j = 0; j < i; j++)
    {
        cout << "Enter  integer" << j + 1 << endl;
        cin >> integer;
        num.push_back(integer);
    }
    for (int i : num)
    {
        cout << i << "  ";
    }

    return 0;
}