#include <iostream>
using namespace std;
class employee
{
    int id;
    string name;

public:
    void getData()
    {
        cout << "Enter the id of Employee\n";
        cin >> id;

        cout << "Enter the name of Employee\n";
        cin >> name;
    };

    void putData()
    {
        cout << id << " ";
        cout << name << " ";
        cout<<endl;
    };
};
int main()
{
    int n;
    cout << "Enter the number of employees\n";
    cin >> n;
    employee emp[n];
    for (int i = 0; i < n; i++)
    {

        emp[i].getData();
    }
cout<<"Employee details -"<<endl;
    for (int i = 0; i < n; i++)
    {

        emp[i].putData();
    }

    return 0;
}