#include<iostream>
using namespace std;
int main()
{
// This memory for 10 integers
// is allocated on heap.
int *ptr = new int[10];
int g=10;
int h=20;
*ptr=g;
cout<<*ptr;
}
