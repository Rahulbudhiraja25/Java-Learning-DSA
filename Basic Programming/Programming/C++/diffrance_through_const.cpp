#include<iostream>
using namespace std;

void display(char *);
void display(const char *);

int main(){

char*ch1="Hello";
const char*ch2="Heya";

display(ch1);
display(ch2);

}
void display(char * num){

cout<<num<<endl;

}
void display(const char * num){

cout<<num<<endl;

}