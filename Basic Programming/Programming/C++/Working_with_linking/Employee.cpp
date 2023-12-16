#include<iostream>
#include"Employee.h"
using namespace std;
Employee::Employee(){

name="";
age=0;

}
Employee::Employee(string n,int a){

name=n;
age=a;

}
void Employee::getdata(){

cout<<"Enter name";
cin>>name;
cout<<"Enter age";
cin>>age;

}
void Employee::showdata(){

cout<<"Name of Employee:"<<name<<endl<<"Age of Employee:"<<age<<endl;


}