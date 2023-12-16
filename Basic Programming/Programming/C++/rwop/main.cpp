#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string st,st2;
ofstream out; 
out.open("This.txt");
cout<<"Enter your name \n";
cin>>st;
out<<st;
out<<" is my name ";
out<<" \nMy name is Rahul ";

out.close();

ifstream in;
in.open("This.txt");

while(in.eof()==0){

getline(in,st2);
cout<<st2<<endl;
}
in.close();
    return 0;
}