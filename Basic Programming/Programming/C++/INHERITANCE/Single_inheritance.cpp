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
class italianshef:public shef{
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


}