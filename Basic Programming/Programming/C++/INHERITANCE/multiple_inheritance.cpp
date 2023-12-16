#include<iostream>
using namespace std;

class shef{
public:
void indian(){
    cout<<"Indian Food"<<endl;
}
void chinese(){
    cout<<"Chinese Food"<<endl;
}

};
class gujratishef{
public:
void gujrati(){
    cout<<"Gujrati Food"<<endl;
}

};


class italianshef:public shef ,public gujratishef{
    public:
void italian(){

    cout<<"Italian Food"<<endl;
}

};
int main(){
italianshef s1;

s1.chinese();
s1.italian();
s1.indian();
s1.gujrati();

}