#include <iostream>
using namespace std;
class point
{
public:
    int x, y;
    point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    point(const point &p1)
    {
        x = p1.x;
        y = p1.y;
    }
};
int main()
{
    point p3(1, 2);
    point p2 = p3;
    cout << p3.x;
    cout << p3.y;
    cout << p2.x;
    cout << p2.y;
    return 0;
}