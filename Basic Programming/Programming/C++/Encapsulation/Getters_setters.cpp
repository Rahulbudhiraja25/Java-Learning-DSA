#include<iostream>
using namespace std;

class Movie{
private:
string name,rating;
public:
 void setnam(string mname){
mname=name;

 }
void setrat(string mrating){
if(mrating=="best"||mrating=="Good"||mrating=="Avg"||mrating=="NR"){

rating=mrating;
}else
rating="NR";
    
}
string getrat(){
return rating;
}

};
int main(){
Movie m1;
m1.setrat("Good");
cout<<m1.getrat()<<endl;


    return 0;
}