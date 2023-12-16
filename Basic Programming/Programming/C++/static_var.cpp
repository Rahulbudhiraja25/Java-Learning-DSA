#include <iostream>
using namespace std;
class a
{
public:
    int id;
    // string name;
    static int count;
    void setdata()
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "Employee number " << count << "."
             << "  The id of employee is " << id << endl;
    }
};
int a::count;
int main()
{
    a rahul, mohan, sohan;
    rahul.setdata();
    rahul.getdata();

    mohan.setdata();
    mohan.getdata();

    sohan.setdata();
    sohan.getdata();

    return 0;
}