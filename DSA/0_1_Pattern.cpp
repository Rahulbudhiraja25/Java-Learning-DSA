// 0,1 Pattern
// FOR N==5
// 1
// 01
// 101
// 0101
// 10101

#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number for which you want to print pattern\n";
cin>>n;
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
if((i+j)%2==0){
    cout<<"1";
}
else{
cout<<"0";
}
}
cout<<endl;
}
 return 0;
}