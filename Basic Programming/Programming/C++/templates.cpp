#include <iostream>
using namespace std;
template <typename type>
type maxchoose(type x, type y)
{
    return (x > y) ? x : y;
};
int main()
{
cout<<maxchoose<int>(4,3)<<endl;
cout<<maxchoose<float>(4.2,3.39)<<endl;
    return 0;
}