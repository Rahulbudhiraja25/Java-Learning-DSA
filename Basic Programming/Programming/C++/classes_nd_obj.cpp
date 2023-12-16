#include<iostream>
using namespace std;
//Defining a class
class a{
    public://Access specifier
void printdata(){
    cout<<"Data is printed using object";
}
};
int main(){
    a a1; // Object of class is defined
    a1.printdata();
    return 0;
}