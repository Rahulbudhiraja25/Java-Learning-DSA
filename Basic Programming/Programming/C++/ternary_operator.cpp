#include <iostream>
using namespace std;
int main()
{
    string pfcheck;
    int marks;
    cout << "Enter the marks of student\n";
    cin >> marks;
    pfcheck = (marks >= 50) ? "Pass" : "Fail";
    cout << "Marks are " << marks << endl
         << "Student is  " << pfcheck << endl;
    return 0;
}