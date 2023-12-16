#include<iostream>
using namespace std;
// void getdata(int r,int b);
class student{
    private:
    int roll,marks;
public:
void getdata(int r,int b){
roll=r;
// cin>>r>>b;
marks=b;

}

void display(){
cout<<"Marks of student is "<<marks<<endl<<"Roll number of student is "<<roll;

}

};
int main(){

student c1;

c1.getdata(22,99);
c1.display();
return 0;
}
// student::