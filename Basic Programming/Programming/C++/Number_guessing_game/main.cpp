#include<iostream>
#include<time.h>
using namespace std;

int randnumgen(){
int a;
srand(time(0));
a=(rand()%100);
return a;
}

int main(){
int a,guess,b=0;
a=randnumgen();

while(a!=guess){
cout<<"Enter your guess"<<endl;
cin>>guess;
if(guess<a){
    cout<<"Guess a Higher Number"<<endl;
}
if(guess>a){
    cout<<"Guess a Lower Number"<<endl;
}
b++;
}
cout<<"HAHAHA!! You Guessed The number in "<<b<<" attempts"<<endl;
\

}
