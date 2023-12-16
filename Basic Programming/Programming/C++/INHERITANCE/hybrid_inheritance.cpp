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


class italianshef{
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
s1.indian();
s1.chinese();
s1.gujrati();
s1.italian();



}