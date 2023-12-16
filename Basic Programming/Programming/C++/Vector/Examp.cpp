#include <iostream>
using namespace std;
class ic
{
public:
    int swap(int *a, int *b)
    {

        int temp;
        temp = *a;
        *a = *b;
        *b = temp;

        return 0;
    }
};

int main()
{
    int a = 24;
    int b = 22;
    ic i1;
    i1.swap(&a, &b);
    cout << a << b;
    return 0;
}