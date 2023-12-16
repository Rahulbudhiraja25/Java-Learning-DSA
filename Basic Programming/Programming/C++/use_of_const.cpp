#include<iostream>
using namespace std;

class Book{
public:
string author,title;
int pages;

Book(){
    
cout<<"Enter title"<<endl;
cin>>title;

cout<<"Enter author"<<endl;
cin>>author;

cout<<"Enter pages"<<endl;
cin>>pages;
}
};


int main(){
Book book1;
cout<<"Author of book is "<<book1.author<<endl;
cout<<"title of book is "<<book1.title<<endl;
cout<<"pages of book is "<<book1.pages<<endl;





    return 0;
}



