#include<iostream>
using namespace std;

class Book{
public:
string title,author;
int pages;
Book(){
cout<<"Enter title"<<endl;
cin>>title;
fflush(stdin);
cout<<"Enter author"<<endl;
cin>>author;
fflush(stdin);
cout<<"Enter pages"<<endl;
cin>>pages;


}
~Book(){
    cout<<"Destructing Object";
}


};

int main(){
Book book1;

cout<<"Title of book is "<<book1.title<<endl;
cout<<"author of book is "<<book1.author<<endl;
cout<<"pages of book is "<<book1.pages<<endl;


    return 0;
}