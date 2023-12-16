// Creating a program to find odd and even numbers b/w Given Numbers
#include <iostream>
using namespace std;
int oefind()
{
    int arrod[500];
     cout<<"Even numbers are : \n";
 for(int i=1;i<=100;i++){
     if(i%2==0){
cout<<i<<endl;
}
else
arrod[i]=i;
}
cout<<"\n Odd numbers are :\n";
for(int j=1;j<=100;j++){
cout<<arrod[j]<<endl;
}
}
int main()
{
    oefind();
}