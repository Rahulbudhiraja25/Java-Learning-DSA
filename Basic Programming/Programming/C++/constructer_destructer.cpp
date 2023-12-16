#include<iostream>
using namespace std;

class add{
public:
int a,b;

void getdata(int e,int f){
a=e;
b=f;
}

add(){
int sum ;
sum=a+b;
cout<<"Constructor" <<endl;
}

add(int a,int b){
int sum;
sum=a+b;
cout<<"Overloaded Constructor";
}

~add(){

cout<<"Destructing constructor"<<endl;

}

};

int main(){
add a1;

    return 0;
}