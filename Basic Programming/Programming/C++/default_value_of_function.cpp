#include<iostream>
using namespace std;
int sum(int a,int b,int c=0,int d=0);
int  main(){
int d;
d=sum(10,20);
cout<<"sum is"<<d<<endl;
d=sum(10,20,30);
cout<<"sum is"<<d<<endl;
d=sum(10,20,30,40);
cout<<"sum is"<<d<<endl;
d=sum(10,20,30,40);
// cout<<"sum is"<<d<<endl;


return 0;
}

int sum(int a,int b,int c,int d){
int sum;
sum=a+b+c+d;
return sum;
}