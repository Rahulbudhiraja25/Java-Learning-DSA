//Diamond Problem 
//when child class acquires property of his father mother class 
//and father mother acquire property from a parent class
//         Structure



//          Parent(shef)
// Father(gs)             Mother(is)
//          Child(cs)


#include<iostream>
using namespace std;

class shef{
public:
void indian(){
    cout<<"Indian Food"<<endl;
}

};
class gujratishef:public shef{
public:
void gujrati(){
    cout<<"Gujrati Food"<<endl;
}

};


class italianshef:public shef{
    public:
void italian(){

    cout<<"Italian Food"<<endl;
}

};
class chineseshef:public italianshef,public gujratishef{
public:
void chinese(){
    cout<<"Chinese Food"<<endl;
}
};
int main(){
chineseshef s1;
gujratishef s2;
s1.chinese();
s1.gujrati();
s1.italian();
s1.indian();
s2.indian();

}

//The Diamond problem implemented in C++ results in ambiguity error at compilation. We can resolve this problem by making the root base class as virtual. We will learn more about the “virtual” keyword in our upcoming tutorial on polymorphism.

//class Child inherits the traits of class Person twice i.e. once from Father and the second time from Mother. This gives rise to ambiguity as the compiler fails to understand which way to go.