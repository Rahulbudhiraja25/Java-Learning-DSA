#include <iostream>
using namespace std;

class person
{
    char name[30];
    int age;

public:
    void getinf(void);
    void printinf(void);
};
void person::getinf(void)
{
    cout << "Enter your name";
    cin >> name;
    cout << "Enter your age";
    cin >> age;
}
void person::printinf(void)
{
    cout << "Name of person is";
    cout << name;
    cout << "Age of person is";
    cout << age;
}
int main()
{
    person p;
    p.getinf();
    p.printinf();
    person q;
    q.getinf();
    q.printinf();
    return 0;
}
