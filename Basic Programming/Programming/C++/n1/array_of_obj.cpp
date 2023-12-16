#include <iostream>
using namespace std;
class emp
{
public:
    int id;
    string pass;
};
int main()
{
    emp e[9];
    for (int i = 0; i < 9; i++)
    {
        cout << "Enter the employee id"<<endl;
        cin >> e[i].id;

        cout << "Enter the employee password"<<endl;
        cin >> e[i].pass;
        fflush(stdin);
    }

    for (int i = 0; i < 9; i++)
    {
        cout << "Employee id is :" << e[i].id<<endl;

        cout << "Employee pass is :" << e[i].pass<<endl;
    }

    return 0;
}