#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string message;
    // Writing in this file
    //     cout<<"Enter your message"<<endl;
    //     getline(cin,message);
    fstream file;
    // file.open("new.txt",ios::out);
    // file<<message;

    // Reading from a file
    file.open("new.txt", ios::in);
    getline(file, message);
    cout << message;
    return 0;
}