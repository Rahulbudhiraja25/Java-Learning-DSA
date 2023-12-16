#include<iostream>
using namespace std;
int fact(int n){
    int facto;
if(n==1||n==0){
 facto=1;
}
else 
{
facto=n*fact(n-1);


}

return facto;
}
int main(){
    int a,c;
cout<<"Enter the Number"<<endl;
cin>>a;
c=fact(a);
cout<<"Factorial of "<< a <<" is "<<c<<endl;

    return 0;
}