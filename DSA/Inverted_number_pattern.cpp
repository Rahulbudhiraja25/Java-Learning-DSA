// Print Pattern Inverted Pyramid

// 12345
// 1234
// 123
// 12
// 1

#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number for which you want to print your pattern\n";
cin>>n;

for(int i=1;i<=n;i++){
for(int j=1;j<=(n+1-i);j++){
    cout<<j;
}

cout<<endl;
}
    return 0;
}