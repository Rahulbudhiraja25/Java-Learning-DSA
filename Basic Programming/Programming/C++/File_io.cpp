// #include<iostream>
// #include<fstream>
// using namespace std;
//  int main(){
// string st2;
// st2="This is a sample string";
// ofstream out("Sample.txt");
// out<<st2;

//  }

#include<iostream>
#include<fstream>
using namespace std;
int main(){
string st2,st3;
ifstream in("sample.txt");
getline(in,st2);
getline(in,st3);
cout<<st2<<endl;
cout<<st3<<endl;


}