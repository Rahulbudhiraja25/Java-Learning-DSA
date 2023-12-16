#include<iostream>
using namespace std;
int main(){
int a,b,result;
char op;

cout<<"Enter first number";
cin>>a;
cout<<"Enter The Operation";
cin>>op;
cout<<"Enter second number";
cin>>b;

switch(op){
case '+':
result=a+b;
break;
case '-':
result=a-b;
break;
case '*':
result=a*b;
break;
case '/':
result=a/b;
break;
default:
cout<<"Wrong operation";

}
cout<<"The result is"<<result;


}