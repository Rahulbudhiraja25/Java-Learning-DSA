#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    void print()
    {

        cout << real << "+" << imag << "i" << endl;
    }

    complex operator+(complex d)
    {

        complex temp;
        temp.real = real + d.real;
        temp.imag = imag + d.imag;
        return temp;
    }
};

int main()
{

    complex c1(5, 4);
    complex c2(3, 2);
    complex c3(1, 1);

        complex();

    complex c4 = c1 + c2 + c3;

    c4.print();
}

// #include<iostream>
// using namespace std ;
// class Distance{
// public:
// int feet,inch ;

// Distance(){
//     feet=0;
//     inch=0;

// }
// Distance(int f , int i){
//     feet=f;
//     inch =i;

// }
// Distance operator +(Distance d5){
//     Distance d3;
//     d3.feet=feet+d5.feet;
//     d3.inch=inch+d5.inch;
//     return d3;
// }
// };
// int main(){
// Distance d1(8,9);
// Distance d2(10,2);
// Distance d3;
// d3=d1+d2;
// cout<<d3.feet<<""<<d3.inch<<endl;
// return 0 ;
// }