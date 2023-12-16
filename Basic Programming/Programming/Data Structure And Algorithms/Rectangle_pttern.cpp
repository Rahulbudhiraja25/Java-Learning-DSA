#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the number of rows\n";
    cin >> r;

    cout << "Enter the number of coloums\n";
    cin >> c;


for(int j=1;j<=r;j++){
for(int i=1;i<=c;i++){
cout<<"*";
}
cout<<endl;
}

        
    return 0;
}