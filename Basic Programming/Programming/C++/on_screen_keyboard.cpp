#include <iostream>
using namespace std;
void printboard()
{
    char a = 'A';
    for (a = 'A'; a <= 'Z'; a++)
    {
        cout << a << "\t";
    }
}
int main()
{
    while (cin)
        printboard();
}