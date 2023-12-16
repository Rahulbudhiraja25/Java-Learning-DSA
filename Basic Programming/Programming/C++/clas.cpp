#include <iostream>
using namespace std;
class rectangle
{
private:
    int len, bre;

public:
    void setdata(int a, int b)
    {
        len = a;
        bre = b;
    }
    void displaydata()
    {
        cout << "Length of rectangle is " << len << endl
             << "Bredth of rectangle is" << bre << endl;
    }
    void AreaPeri()
    {
        int area, peri;

        area = len * bre;
        peri = 2 * (len + bre);

        cout << "Area of rectangle is " << area << endl
             << "Perimeter of rectangle is " << peri << endl;
    }
};
int main()
{
    rectangle r1, r2, r3, r4;

    r1.setdata(10, 20);
    r1.displaydata();
    r1.AreaPeri();

    r2.setdata(25, 40);
    r2.displaydata();
    r2.AreaPeri();

    r3.setdata(15, 13);
    r3.displaydata();
    r3.AreaPeri();

    r4.setdata(2, 10);
    r4.displaydata();
    r4.AreaPeri();

    return 0;
}