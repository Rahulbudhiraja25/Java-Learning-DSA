#include<iostream>
using namespace std;

int expo(int num,int expo){
    int a=num;
for(int i=1;i<expo;i++){

num=num*a;
}

return num;

}
int main(){

int a=expo(2,4);
cout<<a;



    return 0;
}