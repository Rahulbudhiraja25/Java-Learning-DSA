#include<iostream>
using namespace std;

class rev{
    public:
int reverse(int n){
int rev=0,rem;
while(n!=0){
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
return rev;

}


};
int main(){
int num=12345;
rev r2;
int c=r2.reverse(num);
cout<<"reversed number:"<<c;

    return 0;
}