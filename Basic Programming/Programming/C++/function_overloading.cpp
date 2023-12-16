#include <iostream>
using namespace std;
int sum(){

    cout<<"No Input"<<endl;
}
int sum(int c, int d)
{
    int sum;

    sum = c + d;
    return sum;
}

int sum(int c, int d, int e)
{
    int sum;

    sum = c + d + e;
    return sum;
}

int main()
{
    
    int c = sum(2,3,4);

    cout << c<<endl;
  sum();
}