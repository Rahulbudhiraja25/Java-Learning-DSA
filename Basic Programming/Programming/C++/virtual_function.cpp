#include <iostream>
using namespace std;
class Shape
{
public:
    int width = 6, area, height = 8;
    virtual void calArea() = 0;
    // {
    //     area = width * height;
    //     cout << area;
    // }
};
class triangle : public Shape
{
public:
    int side = 5;
    void calArea()
    {
        area = side * side * side;
        cout << area;
    }
};
class cirle : public Shape
{
public:
    int r = 4;
    void calArea()
    {
        area = 22.7 * r * r;
        cout << area;
    }
};

int main()
{
    Shape *P;
    cirle c1;
    triangle t1;
    P = &t1;
    P->calArea();
    return 0;
}